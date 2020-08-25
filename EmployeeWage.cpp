#include <iostream>
#include <ctime>
using namespace std;

class Employee{
    int PRESENT = 1;
    public :
        void checkAttendance(){
            srand(time(0));
            int empCheck = (rand() % 2);
            if (empCheck == PRESENT)
                cout << "Employee is Present" << endl;
            else
                cout << "Employee is Absent" << endl;
            }
};

int main(){
    cout << "\nWelcome To Employee Wage Computation\n" << endl;
    Employee empObj;
    empObj.checkAttendance();
}