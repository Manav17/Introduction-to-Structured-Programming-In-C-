
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>

//Notes
//I used Whole numbers in my logic but the output uses counting number.
using namespace std;


int main ()

{
//Randomizer of Rand #
    srand((unsigned) time (NULL));
    
//Variables
    int ARRAYSIZE, RANGE_MAX, MAX, MIN, MAX_INDEX=0, MIN_INDEX=0, RAND;
    int SUM, WIDTH, ODD, EVEN;
    float MEAN;
    char AGAIN_S, AGAIN_A='y';//Loop App and Search

    
//Loop App
    while ((AGAIN_A=='y')or(AGAIN_A=='Y'))
    {
        
//Input
        cout << "\n\tWelcome to the Array Generator.";
        
        cout << "\n\n\t(1 of 2) Enter Array Size : ";
        cin >> ARRAYSIZE;
        
        cout << "\n\t(2 of 2) Enter Maximum Value Of The Random Number : ";
        cin >> RANGE_MAX;
        
//Inilization,input nessecaary for some inilizations
        AGAIN_S='y';
        WIDTH=15;
        EVEN=0;
        ODD=0;
        SUM=0;
        MAX=0;
        MIN=RANGE_MAX;
        
//Error correction
        if (ARRAYSIZE<0)
        {
            ARRAYSIZE=ARRAYSIZE*-1;
        }
        
        if (ARRAYSIZE==0)
        {
            cout << "\n\tYou Cannot Create An Array Of Size 0, Defaluting To 9.";
            ARRAYSIZE=9;
        }
        
//Local Variables, including main ARRAY
        int ARRAY[ARRAYSIZE];
        int AA;

//Build Initial Array
        cout <<"\n\t"<<ARRAYSIZE<<" Random Numbers Ranging from 1 - "<<RANGE_MAX<<".";
        cout <<"\n";
        
        for (int A=0; A<ARRAYSIZE; A++)
        {
    //Random Number and Range
            RAND=(rand()%RANGE_MAX)+1;
            ARRAY[A]=RAND;
            AA=A+1;
            
            cout << "\n\tNumber # "<<AA<<setw(WIDTH)<<ARRAY[A];
        }
        
//Search Loop
        while ((AGAIN_S=='y')or(AGAIN_S=='Y'))
        {
    //Local Variables
            int FOUND_COPIES=0;
            int FOUND_INDEX[ARRAYSIZE];
            int D, E=0, YY;
            int SEARCH;
            bool FOUND=false;
            
            cout << "\n\n\tEnter A Value To Find In The Array : ";
            cin >> SEARCH;
            
//Clean up Display
            system("clear");
            
            cout <<"\n\t"<<ARRAYSIZE<<" Random Numbers Ranging from 1 - "<<RANGE_MAX<<".";
            cout <<"\n";
            
            for (int Y=0; Y<ARRAYSIZE; Y++)
            {
                YY=Y+1;
                
                cout << "\n\tNumber # "<<YY<<setw(WIDTH)<<ARRAY[Y];
            }
            
//Search Function
            for(int B=0; B<ARRAYSIZE; B++)
            {
                if (ARRAY[B]==SEARCH)
                {
    //Find Multi Copies
                    FOUND=true;
                    FOUND_INDEX[E]=B+1;
                    FOUND_COPIES++;
                    E++;
                }
            }
    //If 1 or more found
            if (FOUND==true)
            {
                cout << "\n\n\t"<<FOUND_COPIES<<" Entries Of Value "<<SEARCH<<" Were Found.";
                cout << "\n";
                
                for (int C=0; C<FOUND_COPIES;C++)
                {
                    D=C+1;
                    cout << "\n\tEntry "<<D<<" Of "<<FOUND_COPIES<<" Is Found At Number #"<<FOUND_INDEX[C];
                }
            }
    //If none found
            else
            {
                cout << "\n\n\t"<<FOUND_COPIES<<" Entries Of Value "<<SEARCH<<" Were Found.";
                cout << "\n\tValue "<<SEARCH<<" Does Not Exist In This Array.";
            }
            
            cout << "\n\n\tFind Another Value In The Array (y or n).";
            cin >> AGAIN_S;
        }
        
        system("clear");
        
//Final Output
        cout <<"\n\t"<<ARRAYSIZE<<" Random Numbers Ranging from 1 - "<<RANGE_MAX<<".";
        cout <<"\n";
        
        for (int F=0;F<ARRAYSIZE; F++)
        {
    //Local Variables
            int FF;
            int CASE=0;
            
            FF=F+1;
            
    //Output Array
            cout << "\n\tNumber # "<<FF<<setw(WIDTH)<<ARRAY[F];
//Finding Max and Min
            if ( ARRAY[F]>MAX)
            {
                MAX=ARRAY[F];
                MAX_INDEX=F+1;
            }
            
            if (ARRAY[F]<MIN)
            {
                MIN=ARRAY[F];
                MIN_INDEX=F+1;
            }
//Sum For Average and Sum
            SUM=SUM+ARRAY[F];

//ODD and EVEN
            CASE=ARRAY[F]%2;
            switch (CASE)
            {
                case 0:
                {
                    EVEN++;
                    break;
                }
                case 1:
                {
                    ODD++;
                    break;
                }
            }
        }
    //Mean Calculations
        MEAN=(float)SUM/ARRAYSIZE;
        
//Statistics of Array
        cout << "\n\n\tThe SUM of the "<<ARRAYSIZE<<" Element Array is "<<SUM;
        cout << "\n\tThe MEAN of the "<<ARRAYSIZE<<" Element Array is "<<MEAN;
        cout << "\n\tThe MAX of the Array is "<<MAX<<" Located At Number #"<<MAX_INDEX;
        cout << "\n\tThe MIN of the Array is "<<MIN<<" Located At Number #"<<MIN_INDEX;
        cout << "\n\tThe Array contains "<<ODD<<" ODD Values";
        cout << "\n\tThe Array contains "<<EVEN<<" EVEN Values";
        
        cout << "\n\n\tRun This Again (y or n).";
        cin >> AGAIN_A;
        
        system("clear");
    }
}
