#include <boost/filesystem.hpp>
#include <iostream>
using namespace std;


int main(){

	boost::filesystem::create_directory("/home/steven/Trash");
    char buffer[255];
    for(int i = 1; i < 51; i++)
        {
            sprintf(buffer, "/home/steven/Trash/Trash%d", i);
            boost::filesystem::create_directory(buffer);
            cout  << "I have dumped folder " << i << ".\n";
        }
    cout << "I have dumped 50 folders. Do you want these folders deleted? [Yes/No:] ";

    while (true)
        {
            string choice;
            cin >> choice;

            if (choice == "Yes")
            {
                cout << "The folders are removed.";
                boost::filesystem::remove_all("/home/steven/Trash/");
                exit(0);
            }

            else if (choice == "No")
            {

                cout << "The folders stay.";
                exit(0);

            }

            else
            {
                (cout << "Enter Yes or No\n[Yes/No:] ");
            }
        }
}
