#include <iostream>
#include <ctime>
using namespace std;

const int RATE_PER_HOUR = 20;
const int FULL_DAY_WORK = 1;
const int PART_DAY_WORK = 2;
const int TOTAL_WORKING_DAYS = 20;
const int TOTAL_WORKING_HOURS = 100;

class Employee
{
    int empHours;

public:
    int checkAttendance();
    int getDailyHours(int);
    void calculateWage(Employee);
};

int Employee :: checkAttendance()
{
    return (rand() % 3);
}

int Employee :: getDailyHours(int attendance)
{
    switch (attendance)
    {
    case FULL_DAY_WORK:
        empHours = 8;
        break;
    case PART_DAY_WORK:
        empHours = 4;
        break;
    default:
        empHours = 0;
    }
    return empHours;
}

void Employee :: calculateWage(Employee empObj)
{
    int days = 0;
    int totalHours = 0;
    int totalWage = 0;
    while (days < TOTAL_WORKING_DAYS && totalHours < TOTAL_WORKING_HOURS)
    {
        int attendance = empObj.checkAttendance();
        int dailyHours = empObj.getDailyHours(attendance);
        totalHours += dailyHours;
        totalWage += dailyHours * RATE_PER_HOUR;
        cout << "Day :" << (days + 1) << "  Wage : " << (dailyHours * RATE_PER_HOUR) << endl;
        days++;
    }
    cout << "Total Hours worked : " << totalHours << endl;
    cout << "Montly wage : " << totalWage << endl;
}

int main()
{
    srand(time(0));
    Employee empObj;
    cout << "\nWelcome To Employee Wage Computation\n"
         << endl;

    empObj.calculateWage(empObj);   
    return 0;
}