
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>


using namespace std;


int main ()
{
    srand((unsigned) time (NULL));
//Loop APP
    int OPT=0;
    
    while (OPT!=4)
    {
//Variables
        int SIZE_N=70;
        int PLAY [SIZE_N], WIN [SIZE_N];
        int NUM1, NUM2, NUM3, NUM4, NUM5;
        int IND, MATCH, COUNT, STOP;
        double M1, M2, M3, M4, M1P, M2P, M3P, M4P, CASH;
        bool POW, JACKPOT;
        
//Initilizations
        IND = 0;
        MATCH = 0;
        POW = false;
        JACKPOT = false;
        COUNT = 0;
        STOP = 0;
        
        
        M1 = 0;
        M2 = 0;
        M3 = 0;
        M4 = 0;
        
        M1P = 0;
        M2P = 0;
        M3P = 0;
        M4P = 0;
        
        
        for (int A=0; A<SIZE_N; A++)
        {
            PLAY [A] = 0;
            WIN [A] = 0;
        }
       
//Menu Output and Input
        cout << "\n\tLottery Simulator";
        cout << "\n\n\t\tMenu";
        cout << "\n\t1 - Enter Custom Numbers";
        cout << "\n\t2 - Run Random Numbers";
        cout << "\n\t3 - Probabilities";
        cout << "\n\t4 - Quit";
        
        cout << "\n\n\tOption: ";
        cin >> OPT;
        
        system ("clear");

        //Option Cases
        switch (OPT)
        {
//Option 1
            case 1:
            {
                cout << "\n\tCustom Numbers";
                
                //Input for Nums
                do
                {
                cout << "\n\n\tEnter Number 1 (1-69): ";
                cin >> NUM1;
                }
                while (NUM1 > 69);
                
                PLAY [NUM1]=1;
                

                do
                {
                    cout << "\n\tEnter Number 2 (1-69): ";
                    cin >> NUM2;
                }
                while ((PLAY[NUM2] == 1) or (NUM2 > 69));
                
                PLAY [NUM2] = 1;
                
                
                do
                {
                    cout << "\n\tEnter Number 3 (1-69): ";
                    cin >> NUM3;
                }
                while ((PLAY[NUM3] == 1) or (NUM3 > 69));
                
                PLAY [NUM3] = 1;
                
                
                do
                {
                    cout << "\n\tEnter Number 4 (1-69): ";
                    cin >> NUM4;
                }
                while ((PLAY[NUM4] == 1) or (NUM4 > 69));
                
                PLAY [NUM4] = 1;
                
                
               //Power Num
                do
                {
                    cout << "\n\tEnter Number 5 (1-26) (P-Num): ";
                    cin >> NUM5;
                }
                while ((PLAY[NUM5] == 1) or (NUM5 > 26));

                PLAY [NUM5] = 2;
                
                
                system ("clear");
    
    //Output
                //Input Nums
                cout << "\n\t\tResults";
                cout << "\n\n\tYour Numbers are :";
                
                for (int B=0; B<SIZE_N; B++)
                {
                    if (PLAY[B]==1)
                    {
                        cout << " " << B;
                    }
                }
                //Power Num
                for (int C=0; C<SIZE_N; C++)
                {
                    if (PLAY[C]==2)
                    {
                        cout << " - " << C;
                    }
                }
                
    //Winning Number Creator
                cout << "\n\tWinning Numbers are: ";
                
                //Nums
                for (int D=0; D<5; D++)
                {
                    do
                    {
                        IND = (rand() % 69) + 1;
                    }
                    while (WIN [IND] == 1);
                    
                    WIN [IND] = 1;
                    
                    cout << " " << IND;
                }
                
                //Power Num
                
                do
                {
                    IND = (rand() % 26) + 1;
                }
                while (WIN [IND] == 1);
                
                WIN [IND] = 2;
                
                cout << " - "<< IND;
              
    //Check For Winners
                for (int D=0; D<SIZE_N; D++)
                {
                    if ((PLAY[D] == 1) and (WIN[D] == 1))
                    {
                        MATCH++;
                    }
                    
                    if ((PLAY[D] == 2) and (WIN[D] == 2))
                    {
                        POW = true;
                    }
                }
                
    //Output Results
                
                cout << "\n\n\t" << MATCH;
                
                if (MATCH == 1)
                {
                    cout << " Match ";
                }
                else
                {
                    cout << " Matches ";
                }
                
                if (POW == true)
                {
                    cout << "+ P Match";
                }
                
                if ((MATCH == 4) and (POW == true))
                {
                    cout << "\n\tJACKPOT!!!!!!!!";
                }
                
                break;
            }
            
//Option 2
            case 2:
            {
                cout << "\n\tEnter Stop Count";
                cin >> STOP;
                
                while (JACKPOT != true)
                {
                    
                //Reintialize
                    for (int H=0; H<SIZE_N; H++)
                    {
                        PLAY [H] = 0;
                        WIN [H] = 0;
                    }
                    
                    MATCH=0;
                    POW=false;
                    
                //Play Number Creator
                    cout << "\n\n\tYour numbers are: ";
                    
                    //Nums
                    for (int E=0; E<5; E++)
                    {
                        do
                        {
                            IND = (rand() % 69) + 1;
                        }
                        while (PLAY [IND] == 1);
                        
                        PLAY [IND] = 1;
                        
                        cout << " " << IND;
                    }
                    
                    //Power Num
                    do
                    {
                        IND = (rand() % 26) + 1;
                    }
                    while (PLAY [IND] == 1);
                    
                    PLAY [IND] = 2;
                    
                    cout << " - " << IND;
                
                //Winning Number Creator
                    cout << "\n\tWinning Numbers are: ";
                    
                    //Nums
                    for (int F=0; F<5; F++)
                    {
                        do
                        {
                            IND = (rand() % 69) + 1;
                        }
                        while (WIN [IND] == 1);
                        
                        WIN [IND] = 1;
                        
                        cout << " " << IND;
                    }
                    
                    //Power Num
                    
                    do
                    {
                        IND = (rand() % 26) + 1;
                    }
                    while (WIN [IND] == 1);
                    
                    WIN [IND] = 2;
                    
                    cout << " - "<< IND;
                    
                    //Check For Winners
                    for (int G=0; G<SIZE_N; G++)
                    {
                        if ((PLAY[G] == 1) and (WIN[G] == 1))
                        {
                            MATCH++;
                        }
                        
                        if ((PLAY[G] == 2) and (WIN[G] == 2))
                        {
                            POW = true;
                        }
                    }
                    
                   
//Count matches
                    COUNT++;
                    
                    cout << "\n\t"<<COUNT;
                    
                    if (POW==false)
                    {
                        switch (MATCH)
                        {
                            case 1:
                            {
                                M1++;
                                break;
                            }
                                
                            case 2:
                            {
                                M2++;
                                break;
                            }
                                
                            case 3:
                            {
                                M3++;
                                break;
                            }
                                
                            case 4:
                            {
                                M4++;
                                break;
                            }
                        }
                    }
                    else
                    {
                        switch (MATCH)
                        {
                            case 1:
                            {
                                M1P++;
                                break;
                            }
                                
                            case 2:
                            {
                                M2P++;
                                break;
                            }
                                
                            case 3:
                            {
                                M3P++;
                                break;
                            }
                                
                            case 4:
                            {
                                M4P++;
                                break;
                            }
                        }
                    }
                    
                    if ((MATCH==5) and (POW==true))
                    {
                        cout << "\n\n\tJACKPOT!!!!!!!!!!!!!!";
                        cout << "\n\tIt Took "<<COUNT<<" Plays For A Jackpot";
                        
                        break;
                    }
                    
                    if (COUNT == STOP)
                    {
                        break;
                    }
                }
                
                cout << "\n\t\tResults";
                cout << "\n\tMatch 1 = "<<M1;
                cout << "\n\tMatch 2 = "<<M2;
                cout << "\n\tMatch 3 = "<<M3;
                cout << "\n\tMatch 4 = "<<M4;
                
                cout << "\n\n\tMatch 1 + P = "<<M1P;
                cout << "\n\tMatch 2 + P = "<<M2P;
                cout << "\n\tMatch 3 + P = "<<M3P;
                cout << "\n\tMatch 4 + P = "<<M4P;
                
                break;
            }

//Option 3
            case 3:
            {
        
            //Calculations
                M1=69/4;
                M2=(69*68)/3;
                M3=(69*68*67)/2;
                M4=(69*68*67*66);
                
                M1P=(69*26)/4;
                M2P=(69*68*26)/3;
                M3P=(69*68*67*26)/2;
                M4P=(69*68*67*66*26);
                
            //Output
                cout << "\n\t\tProbabilities";
                cout << "\n\tMatch 1 = 1:"<<M1;
                cout << "\n\tMatch 2 = 1:"<<M2;
                cout << "\n\tMatch 3 = 1:"<<M3;
                cout << "\n\tMatch 4 = 1:"<<M4;
                
                cout << "\n\n\tMatch 1 + P = 1:"<<M1P;
                cout << "\n\tMatch 2 + P = 1:"<<M2P;
                cout << "\n\tMatch 3 + P = 1:"<<M3P;
                cout << "\n\tMatch 4 + P = 1:"<<M4P;
                
                break;
            }
        }
        
      
        
    }
}


