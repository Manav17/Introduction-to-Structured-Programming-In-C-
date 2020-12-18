#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <sstream>


using namespace std;


int main ()
{
//Varables
    string A;
    float B,C;
    
//Input
    cout << "\n\tEnter String";
    getline (cin, A);
    
    
    B=A.length();
    C=A.find('a');
//Find And Replace
    while ((A.length())>A.find ('a'))
    {
    A.replace(A.find('a'), A.find('a')+1, "X");
    }

    A.find('a');
    cout << "\n\t" <<B<< "\n\t"<<C;
    cout << "\n\t"<<A;
}

