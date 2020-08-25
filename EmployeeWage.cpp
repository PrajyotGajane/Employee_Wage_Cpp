#include <iostream>
#include <ctime>
using namespace std;

const int RATE_PER_HOUR = 20;
const int PRESENT = 1;

class Employee{
    int empHours;
    public :
        int checkAttendance();
        int getDailyWage(int);
};

int Employee :: checkAttendance(){
    srand(time(0));
    return (rand() % 2);  
}

int Employee :: getDailyWage(int attendance){
    if (attendance == PRESENT)
        empHours = 8;
    else
        empHours = 0;
   return empHours * RATE_PER_HOUR;
}

int main(){
    cout << "\nWelcome To Employee Wage Computation\n" << endl;
    Employee empObj;
    int attendance = empObj.checkAttendance();
    cout << "Employee's today's wage is : " << empObj.getDailyWage(attendance) << endl;
    return 0;
}