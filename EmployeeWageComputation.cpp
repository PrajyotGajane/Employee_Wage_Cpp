#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EmpWageBuilder {

	string companyName;
	int wagePerHr;
	int numOfWorkingDays;
	int maxWorkingHours;
	int monthlyWage;

	public:
	EmpWageBuilder(string companyName, int wagePerHr,
						int numOfWorkingDays, int maxWorkingHours) {

		this -> companyName = companyName;
		this -> wagePerHr = wagePerHr;
		this -> numOfWorkingDays = numOfWorkingDays;
		this -> maxWorkingHours = maxWorkingHours;
   }

	public:
	void computeEmpWage() {

		const int PART_TIME = 1;
		const int FULL_TIME = 2;

		int empHrs;
		int totalEmpHrs = 0;
		int totalWorkingDays = 0;

		srand(time(0));

		while(totalEmpHrs <= maxWorkingHours && totalWorkingDays < numOfWorkingDays) {
			totalWorkingDays++;

			int empCheck = rand() % 3;

			switch(empCheck) {

				case PART_TIME:
					empHrs = 4;
					break;

				case FULL_TIME:
					empHrs = 8;
					break;

				default:
					empHrs = 0;
			}
			totalEmpHrs += empHrs;
		}
		monthlyWage = totalEmpHrs * wagePerHr;
		cout << "Employee Monthly Wage For Company " << companyName << " Is: " << monthlyWage << endl;
	}
};

int main() {

	cout << "Welcome to employee wage problem" << endl;

	EmpWageBuilder* apple = new EmpWageBuilder("Apple", 20, 20, 100);
	EmpWageBuilder* google = new EmpWageBuilder("Google", 30, 30, 200);
	EmpWageBuilder* amazon = new EmpWageBuilder("Amazon", 50, 20, 300);

	apple -> computeEmpWage();
	google -> computeEmpWage();
	amazon -> computeEmpWage();

	return 0;
}