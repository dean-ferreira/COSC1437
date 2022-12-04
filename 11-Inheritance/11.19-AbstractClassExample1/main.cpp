/*
Complete the missing declarations for the functions PrintInfo() and GetAnnualBonus in the files Employee.h, Staff.h, and Manager.h
*/

#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Staff.h"

using namespace std;

int main()
{
    Employee *manager = new Manager(25);
    Employee *staff = new Staff("Michele");

    // Load data into the objects using the EmployeePerson class's functions
    manager->SetData("Michele", "Sales", "03-03-1975", 70000);
    staff->SetData("Bob", "Sales", "02-02-1980", 50000);

    // Print the objects
    manager->PrintInfo();
    cout << "Annual bonus: " << manager->GetAnnualBonus() << endl;
    staff->PrintInfo();
    cout << "Annual bonus: " << staff->GetAnnualBonus() << endl;

    return 0;
}
