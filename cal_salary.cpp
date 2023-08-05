//program for calculate employee Salary


#include <iostream>
#include <cstring>

using namespace std;

class employee {
private:
    // Data members
    char name[50];
    int empNo;
    float basicSalary;
    float HRA;
    float DA;

public:
    // Member function to calculate net salary
    void Cal_salary() {
        // HRA is 30%   DA is 20%
        float grossSalary = basicSalary + (0.3 * basicSalary) + (0.2 * basicSalary);
        float netSalary = grossSalary;

        cout << "Employee Name: " << name << endl;
        cout << "Employee Number: " << empNo << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Net Salary: " << netSalary << endl;
    }

    // Member function to set data members
    void setData(const char n[], int no, float basic, float hra, float da) {
        strcpy(name, n);
        empNo = no;
        basicSalary = basic;
        HRA = hra;
        DA = da;
    }
};

int main() {
 

    employee emp;

    // Set data for the employee
    emp.setData("Sneh", 1001, 25000.0, 0, 0);

    // Calculate and display net salary
    emp.Cal_salary();

    

    return 0;
}
