#include <iostream>
#include <ctime>
using namespace std;

const int RATE_PER_HOUR = 20;
const int FULL_DAY_WORK = 1;
const int PART_DAY_WORK = 2;
const int TOTAL_WORKING_DAYS = 20;

class Employee
{
    int empHours;

public:
    int checkAttendance();
    int getDailyWage(int);
};

int Employee ::checkAttendance()
{
    return (rand() % 3);
}

int Employee ::getDailyWage(int attendance)
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
    return empHours * RATE_PER_HOUR;
}

int main()
{
    srand(time(0));
    cout << "\nWelcome To Employee Wage Computation\n"
         << endl;
    Employee empObj;
    int days = 0;
    int totalWage = 0;
    while (days < TOTAL_WORKING_DAYS)
    {
        int attendance = empObj.checkAttendance();
        int dailyWage = empObj.getDailyWage(attendance);
        totalWage += dailyWage;
        cout << "Day :" << (days + 1) << "  Wage : " << dailyWage << endl;
        days++;
    }
    cout << "Montly wage : " << totalWage << endl;
    return 0;
}