#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Company
{
    private:
    string name;
    int wagePerHour;
    int workingDays;
    int maxHours;
    int totalCompWage;

    public:
    Company(string name, int wagePerHour, int workingDays, int maxHours);
    string getName() const;
    int getTotalWage();
    int getDailyEmployeeHours();
    void calculateMonthlyWage();
};
