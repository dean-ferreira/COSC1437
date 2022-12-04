#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <iostream>
#include <string>

class Manager : public Employee {
public:
    Manager() {
        numManaged = 0;
    }
    Manager(int nManaged) {
        numManaged = nManaged;
        
    }
    int GetNumManaged() {
        return numManaged;
    }

    // Add declarations for PrintInfo
    void PrintInfo() override
    {
        std::cout << "Name: " << fullName << ", Department: " << departmentCode
                  << ", Birthday: " << birthday << ", Salary: " << annualSalary
                  << ", Staff managed: " << GetNumManaged() << std::endl;
    }

    // Add declaration for GeAnnualBonus
    int GetAnnualBonus() override
    {
        return (int)(0.1 * annualSalary);
    }

private:
    int numManaged;
};

#endif
