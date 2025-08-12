#include<iostream>
#include<string>
using namespace std;
class Department;
class Employee{
    string name;
    int salary;
    static int count_Employee;
    public:
    static void TotalEmployees();
    Employee(string n, int s){
        name =n;
        salary=s;
        count_Employee++;
    }
    friend  void printEmployee(Employee, Department);
};
 // initializing static variable
int Employee::count_Employee=0;

class Department{
   string deptName;
   public:
   Department(string name){
    deptName=name;
   }
   friend  void printEmployee(Employee, Department);

};
 printEmployee(Employee emp, Department dept){
    cout<<"Employee Name: "<<emp.name<<", Salary: "<<emp.salary<<", Department: "<<dept.deptName<<endl;
    cout<<"Total Employees in the company: "<<Employee::count_Employee<<endl;
 }
int main() {
    Employee emp1("Bikash", 50000);
    Employee emp2("Arjun", 60000);
    Department dept("IT");
    printEmployee(emp1, dept);
    printEmployee(emp2, dept);
    return 0;
};