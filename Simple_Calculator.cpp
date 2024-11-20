#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int i;
    do
    {
        cout << "WELCOME TO MY SIMPLE CALCULATOR......" << endl;
        int a, b;
        int op;
        cout << "Enter two number seperated by spaces : ";
        cin >> a;
        cin >> b;
        cout<<endl;
        cout << "-------Select any given option-------" << endl;
        cout<<endl;
        cout << "Press 1 for Addition (+) >>>" << endl;
        cout << "Press 2 for Subtraction (-) >>>" << endl;
        cout << "Press 3 for Multiplication (*) >>>" << endl;
        cout << "Press 4 for Division-Quotient (/) >>>" << endl;
        cout << "Press 5 for D-Remainder (%) >>>" << endl;
        cout << "Press 6 for Power (^) >>>" << endl;
        cout << "Select one Operation : ";
        cout<<endl;
        cin >> op;
        cout << "Your Answer is : ";
        

        switch (op)
        {
        case 1:
            cout << (a + b) << endl;
            break;
        case 2:
            cout << (a - b) << endl;
            break;
        case 3:
            cout << (a * b) << endl;
            break;
        case 4:
            cout << (a / b) << endl;
            break;
        case 5:
            cout << (a % b) << endl;
            break;
        case 6:
            cout << pow(a , b) << endl;
            break;
        default:
            cout << "Operation not Found...! Select Valid Operation....";
            break;
        }
        cout<<endl;
        cout << "..........................." << endl;
        cout<<endl;
        cout << "Press 1 for Continue >>>" << endl;
        cout << "Press 0 for End >>>" << endl;
        cout << "Are You want to Continue? (1/0) : ";
        cin >> i;
    }
    while (i);

}