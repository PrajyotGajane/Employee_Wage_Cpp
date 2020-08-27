#include <iostream>
#include <vector>
#include "Company.h"
#include "EmployeeWageComputationInterface.hpp"
#include <list>

using namespace std;

list<Company> companyDetailsList;

void setCompanyDetails()
{
    string name;
    int wagePerHour;
    int workingDays;
    int maxHours;
    cout << "\nEnter the name of the company" << endl;
    cin >> name;
    cout << "\nEnter wage per hour of your company" << endl;
    cin >> wagePerHour;
    cout << "\nEnter working days of your company" << endl;
    cin >> workingDays;
    cout << "\nEnter maximum working hours of your company" << endl;
    cin >> maxHours;
    Company company(name, wagePerHour, workingDays, maxHours);
    companyDetailsList.push_back(company);
}

void display()
{
    for (auto address = companyDetailsList.begin(); address != companyDetailsList.end(); ++address)
    {
        cout << "\nCompany Name : " << address->getName() << endl;
        cout << "TotalWage : " << address->getTotalWage() << endl;
        cout << "\n" << endl;
    }
}

void enterCompanies()
{
    bool endKey = true;
    while (endKey)
    {
        int choice;
        cout << "\n1: Enter new Company  2:Display  3: Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            setCompanyDetails();
            break;
        case 2:
            display();
            break;
        case 3:
            endKey = false;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}

int main()
{
    cout << "Welcome to employee wage problem" << endl;
    enterCompanies();
    return 0;
}