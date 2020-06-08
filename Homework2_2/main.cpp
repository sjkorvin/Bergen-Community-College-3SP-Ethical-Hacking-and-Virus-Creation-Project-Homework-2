#include <iostream>
#include <xlnt/xlnt.hpp>
using namespace std;


int main(){
    xlnt::workbook wb;
    wb.load("/home/steven/Documents/Homework2_2/TimTimmersonGrade.xlsx");
    auto ws = wb.active_sheet();
    ws.cell("B1").value("Grade: F");
    wb.save("/home/steven/Documents/Homework2_2/TimTimmersonGrade.xlsx");
    return 0;
}
