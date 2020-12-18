
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

#include "Meep.h"

using namespace std;

//void calculate(string *, float *, float *, float *, float *, float *, float *);
//void calculate (string &, float &, float &, float &, float &, float &);
void add (float *, float *, float *);
void subtract (float &, float &, float &);

int main ()
{
    float hrs, pay, tax;
    string id;

    float *phrs, *ppay, *ptax;
    string *pid;
    
    float taxwithheld = 0, gross = 0, net = 0;
    float *pgross;
    
    pgross = &gross;
    
    phrs = &hrs;
    ppay = &pay;
    ptax = &tax;
    pid = &id;
    
    
    cout << "\n\tPassing Back Pointer From Function";
    
    id = scin("ID");
    hrs = fcin("Hours Worked");
    *ppay = fcin("Pay");
    *ptax = pcin("Tax");
    
    //calculate(&id, &hrs, &pay, &tax, &gross, &net, &taxwithheld);
    
    subtract (hrs, pay, gross);
    
    cout << "total = " << *pgross << " " << gross;
}

void add (float *hrs, float *pay, float *gross)
{
    *gross = *hrs + *pay;
}

void subtract (float &hrs, float &pay, float &gross, float &net)
{
    gross = hrs - pay;
}
