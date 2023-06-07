#include<iostream>
using namespace std;
struct Employee
{
    char name[20];
    int age;
    float salary;
};

void modifyemp(Employee *a, Employee *b)
{
    a->age = 33, a->salary = 3300;
    b->age = 36, b->salary = 3600;
}

void modifyempref(Employee &a, Employee &b)
{
    b.age = 37;
    b.salary = 3700.0;
    a.age = 34;
    a.age = 3400.0;


}

int main()
{

Employee e1 = {"Sanjay", 32, 3200.00};
Employee e2 = {"Sameer", 35, 3500.00};

modifyemp(&e1, &e2);
cout<<e1.name<<" "<<e1.age<<" "<<" "<<e1.salary<<endl;
cout<<e2.name<<" "<<e2.age<<" "<<" "<<e2.salary<<endl;
modifyempref(e1,e2);
cout<<e1.name<<" "<<e1.age<<" "<<" "<<e1.salary<<endl;
cout<<e2.name<<" "<<e2.age<<" "<<" "<<e2.salary<<endl;
return 0;
}

