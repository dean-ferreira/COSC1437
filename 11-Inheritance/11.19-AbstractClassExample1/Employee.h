#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {
public:
    Employee() {
        fullName = "";
        departmentCode = "";
        birthday = "";
        annualSalary = 0;
    }
    
    Employee(std::string empFullName, std::string empDepartmentCode,
             std::string empBirthday, int empAnnualSalary) {
        SetData(empFullName, empDepartmentCode, empBirthday, empAnnualSalary);
    }
        
    void SetData(std::string empFullName, std::string empDepartmentCode,
                 std::string empBirthday, int empAnnualSalary) {
        fullName       = empFullName;
        departmentCode = empDepartmentCode;
        birthday       = empBirthday;
        annualSalary   = empAnnualSalary;
    }
   
    // Add declaration of pure virtual function void PrintInfo()      
    virtual void PrintInfo() = 0;
    // Add declaration of pure virtual function int GetAnnualBonus()
    virtual int GetAnnualBonus() = 0;

protected:
    std::string fullName;         
    std::string departmentCode;
    std::string birthday;
    int annualSalary;
};

#endif
