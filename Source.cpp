#include <iostream>     
#include <string>
#include "Header.h" 
using namespace std;

int main()
{
    Employee employees[100];
    char answer;
    int n = 0;
    do
    {
        cout << "\nEnter your employee \n";
        employees[n++].getdata();
        cout << "\nDo you want to continue typing? (y/n): "; (cin >> answer).get();
    } 
    
    while (answer != 'n');

    for (int j = 0; j < n; j++)
    {
        cout << "\nEmployee " << j + 1 << " : ";
        employees[j].putdata();
    }
    cout << endl;

    system("pause");
    return 0;
}