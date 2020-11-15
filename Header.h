#pragma once
#include <iostream>     
#include <string>
using namespace std; 

class Employee
{
private:
    string name;
    long number;
public:
    void getdata()
    {
        cout << "\nEnter name: "; getline(cin, name);
        cout << "\nEnter number: "; (cin >> number).get();
    }
    void putdata()const
    {
        cout << "\nEmployee's name: " << name << ", number: " << number;
    }
};