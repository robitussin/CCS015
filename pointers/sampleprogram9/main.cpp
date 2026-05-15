#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct emp
{
    char name[50];
    char position[30];
    char department[30];
    float salary;
};

void Accept();
void Output();

int main()
{
    Accept();
    system("pause");
}

void Accept()
{
    emp *employee;
    employee = new emp();
    cout << "Employee Record..." << endl;
    cout << "Employee name: ";
    cin.getline(employee->name, 49);
    cout << "Enter employee position: ";
    cin.getline(employee->position, 29);
    cout << "Enter employee department: ";
    cin.getline(employee->department, 29);
    cout << "Enter employee salary: ";
    cin >> employee->salary;
    Output(employee);
}