# Bergen-Community-College-3SP-Ethical-Hacking-and-Virus-Creation-Project-Homework-2

I had coded this assignment in Code::Blocks on Linux because of how much easier it is to work with third-party libraries on Linux as opposed to Windows. The third-party libraries used were the Boost C++ libraries, libcurl, and xlnt found at https://github.com/tfussell/xlnt. For part 3 of this assignment, I had used this template provided by Phidgets: https://www.phidgets.com/?view=articles&article=LIBCURLHowTo.

Part 1 of the assignment creates 50 directories, outputs a message to the console as each directory is created, and gives the user a choice in deleting the created directories.

Part 2 of the assignment modifies a student's grade in a .xlsx file from A to F.

Part 3 of this assignment creates a directory called "SteveOS" in my home folder, creates a file called in "hacked_system.txt" in the SteveOS directory, deletes the hacked_system.txt file, and emails me a warning message saying that the file has been deleted. The app password for my Google account in my code has been removed.

Update 06/30/2020:

Three weeks ago, I had included all three parts of the project in one file after learning about the break statement. As instructed by my faculty mentor, I had also ported my code to Windows, added comments, and called my code's function with a single line of code.

Two weeks ago, my team had switched to Eclipse; however, the g++ compiler was not working well with our external libraries.

One week ago, we had switched to Visual Studio and we had included all of our external libraries using the vcpkg package manager. vcpkg had made things so much easier for us. I had also decided to use C++17's filesystem library as opposed to the Boost filesystem library.
