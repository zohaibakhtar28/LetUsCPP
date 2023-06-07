#include<iostream>
//Never Return Local Variable with Refernce
using namespace std;
struct Employee
{
    char name[20];
    int age;
    float salary;
};
Employee e1 = {"Sanjay", 32, 3200.00};
Employee e2 = {"Sameer", 35, 3500.00};

Employee &function()
{
    cout<<e1.name<<" "<<e1.age<<" "<<e1.salary<<endl;
    return e1;
}
int main(int argc, char const *argv[])
{
    Employee &function();
    function() = e2;
    cout<<e1.name<<" "<<e1.age<<" "<<e1.salary<<endl;
    
    return 0;
}
