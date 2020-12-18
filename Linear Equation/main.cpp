
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main ()
{
    float m, b, x;
    
    cout << "\n\tSolving for the x-intercept of a funciton in the form y = mx + b.";
    
    cout << "\n\tEnter value for m: ";
    cin >> m;
    
    cout << "\n\tEnter value for b: ";
    cin >> b;
    
    {
        //Calculations
        
        x=-b/m;
    }
    
    {
        cout << "\n\tThe X-intercept for the function y = mx + b is :";
        cout << "\n\t\nx = ";
        cout << x;
        cout << "\n\t\n  ";
    }
}

