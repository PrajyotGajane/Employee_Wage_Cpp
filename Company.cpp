#include "Company.h"
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

Company::Company(string name, int wagePerHour, int workingDays, int maxHours)
{
    this->name = name;
    this->wagePerHour = wagePerHour;
    this->workingDays = workingDays;
    this->maxHours = maxHours;
    this->totalCompWage = 0;
    calculateMonthlyWage();
}

string Company::getName() const
{
    return name;
}

int Company::getDailyEmployeeHours()
{
    const int PART_TIME = 1;
    const int FULL_TIME = 2;
    int empHrs = 0;
    srand(time(0));
    int empCheck = rand() % 3;
    switch (empCheck)
    {
    case PART_TIME:
        empHrs = 4;
        break;
    case FULL_TIME:
        empHrs = 8;
        break;
    default:
        empHrs = 0;
        break;
    }
    return empHrs;
}

void Company::calculateMonthlyWage()
{
    int days = 0;
    int hours = 0;
    while (days < workingDays && hours < maxHours)
    {
        int currentDayHours = getDailyEmployeeHours();
        totalCompWage += wagePerHour * currentDayHours;
        days++;
        hours+=currentDayHours;
    }
}

int Company::getTotalWage()
{
    return totalCompWage;
}