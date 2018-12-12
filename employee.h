#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>

using namespace std;


class Employee
{
public:
    string Name;
    string Position;
    int Age;

    Employee(string _name = "", string _position = "", int _age = 0): Name(_name), Position(_position), Age(_age) {};

    Employee(const Employee& z)
    {
        this->Name = z.Name;
        this->Position = z.Position;
        this->Age = z.Age;
    };

    Employee& operator = (const Employee & x)
    {
        this->Name = x.Name;
        this->Position = x.Position;
        this->Age = x.Age;
        return *this;
    }

    friend ostream& operator << (ostream& o, Employee &z)
    {
        o << "Name: " << z.Name << ", Position: " << z.Position << ", Age: " << z.Age ;
        return o;
    };

};

#endif
