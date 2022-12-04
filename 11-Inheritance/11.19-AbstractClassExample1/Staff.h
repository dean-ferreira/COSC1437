#ifndef STAFF_H
#define STAFF_H

#include "Employee.h"
#include <iostream>
#include <string>

class Staff : public Employee
{
public:
    Staff()
    {
        managerName = "";
    }
    Staff(std::string reportsTo)
    {
        managerName = reportsTo;
    }
    std::string GetManagerName()
    {
        return managerName;
    }

    // Add declaration of PrintInfo()
    void PrintInfo() override
    {
        std::cout << "Name: " << fullName << ", Department: " << departmentCode
                  << ", Birthday: " << birthday << ", Salary: " << annualSalary
                  << ", Manager: " << GetManagerName() << std::endl;
    }

    // Add declaration of GetAnnualBonus()
    int GetAnnualBonus() override
    {
        return (int)(annualSalary * .075);
    }

private:
    std::string managerName;
};

#endif
