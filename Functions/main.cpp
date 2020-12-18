
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>


using namespace std;


//Prototype
void ARRAY (int [], int);


int main ()
{
    int SIZE = 20, NUM [SIZE];
    
//Use Function
    ARRAY (NUM, SIZE);
    
    for (int A=0; A<20; A++)
    {
        cout << "\n\t" << NUM[A];
    }
}

//Load RN
void ARRAY (int AA[], int BB)
{
    for (int B=0; B<BB; B++)
    {
        AA[B]=rand()%100+1;
    }
}
