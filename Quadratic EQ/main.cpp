
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    char AGAIN='y';
while ((AGAIN != 'n')and (AGAIN != 'N'))
    {
        //Variables
        
            float A, B, C; //Input
            float X1 = 0.0, X2 = 0.0; //Solutions
            float D, E, F, G = 0.0; //Intermediatery
            int N;
        
        //Input
        
            cout << "\n\tSolving For The Solutions Of A Quadratic Function In The Form y = ax^2 + bx + c.";
        
            cout << "\n\tEnter Value For a: ";
            cin >> A;
        
            cout << "\n\tEnter Value For b: ";
            cin >> B;
        
            cout << "\n\tEnter Value For c: ";
            cin >> C;
        
        //Calculations
        
            D=-B;
            E=powf(B, 2)-(4*A*C);
            F=2*A;
        
            if(E >= 0) //Real
            {
                N=1;
            }
            else //Imaginary
            {
                N=2;
            }

            switch (N)
            {
                case 1: //Real
                {
                    X1=(D+sqrtf(E))/F;
                    X2=(D-sqrtf(E))/F;
                    break;
                }
                case 2: //Imaginary1
                {
                    E=(E*-1);
                    G=sqrtf(E)/F;
                    D=D/F;
                    break;
                }
                default:
                {
                    cout << "\n\tThere Was An Error Please Try Again.";
                    break;
                }
            }
        
        //Solutions
        
            switch (N)
            {
                case 1: //Real
                {
                    cout << "\n\tThe two solutions for the function have real values and are:";
                    cout << "\n\tX1 = "<<X1;
                    cout << "\n\tX2 = "<<X2;
                    break;
                }
                case 2: //Imaginary
                {
                    cout << "\n\tThe two solutions for the function have imaginary values and are:";
                    cout << "\n\tX1 = "<<D<<" + i"<<G;
                    cout << "\n\tX2 = "<<D<<" - i"<<G;
                    break;
                }
            }
        cout << "\n\n\tRun Again Y Or N?";
        cin >> AGAIN;
    }
}
        

