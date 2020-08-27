#include <iostream>
using namespace std;

class IEmpWageBuilder {

   public:
   virtual void setCompanyDetails() = 0;
   virtual void enterCompanies() = 0;
   virtual void display() = 0;
};