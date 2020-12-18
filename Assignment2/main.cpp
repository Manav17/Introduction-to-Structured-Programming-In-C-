
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
//#include <conio.h>
#include <iomanip>
//#include <curses.h>


using namespace std;


int main ()

{
    //App Loop
    char AGN;
    AGN='y';
    
    while (AGN=='y')
    {
        //Variables
        string CUS_ID;
        char AGN; //Tests
        int ORD, DIS; //Case, Tests
        float Quanitity, Q_DEC, Q_WTC, Q_EUT, P_MLC, P_DEC, P_WTC, P_EUT; //Price
        float T_MLC, T_DEC, T_WTC, T_EUT; //Total
        float R_SPH, O_SPH, T_DIS, O_DIS; //Rate and Output Rate
        float T_SUB, T_SPH, T_TOT, T_QTT, T_SAD;
        
        //Price, S&H, AGN Inilization
        P_MLC=8.50;
        P_DEC=9.75;
        P_WTC=10.50;
        P_EUT=12.50;
        
        Quanitity=0;
        Q_DEC=0;
        Q_WTC=0;
        Q_EUT=0;
        
        T_QTT=0;
        T_DIS=0;
        O_DIS=0;
        
        R_SPH=.1;
        
        O_SPH=100*R_SPH;
        
        AGN='y';
        ORD=0;
        DIS=0;
        
        //Set Precision
        cout.precision(2);
        cout.setf(ios::fixed, ios::floatfield);
        cout.setf(ios::showpoint);
        
        //Input
        cout << "\n\tWelcome To Sugar INC.";
        
        cout << "\n\tEnter Customer ID:";
        cin >> CUS_ID;
        
        system ("clear");
        
        while (ORD!=5)
        {
            cout << "\n\tSugar INC.";
            cout << "\n\tCustomer ID: "<<CUS_ID;
            cout << "\n\n\tItems For Sale:";
            
            cout << "\n\t# 1 - Milk Chocolate @ $"<<P_MLC<<" Per Pound ----------- "<<Quanitity<<"lbs Ordered.";
            cout << "\n\t# 2 - Dark European Chocolate @ $"<<P_DEC<<" Per Pound -- "<<Q_DEC<<"lbs Ordered.";
            cout << "\n\t# 3 - White Chocolate @ $"<<P_WTC<<" Per Pound --------- "<<Q_WTC<<"lbs Ordered.";
            cout << "\n\t# 4 - European Truffles @ $"<<P_EUT<<" Per Pound ------- "<<Q_EUT<<"lbs Ordered.";
            
            cout << "\n\n\t# 5 - End PO And Show Invoice.";
            cout << "\n\t# 6 - Exit.";
            
            cout << "\n\n\tEnter Option #: ";
            cin >> ORD;
            
            if (ORD>6)
            {
                system("clear");
                cout << "\n\tOption #"<<ORD<<" Is Not An Option. Press Any Key to Continue.";
                //getch();
                ORD=0;
            }
            
            //Options
            if (ORD==6)
            {
                //L Variable
                char EXT;
                
                cout << "\n\tAre You Sure You Want To Exit?(y or n)";
                cin >> EXT;
                
                if (EXT=='y')
                {
                    exit (0);
                }
                else
                {
                    ORD=0;
                }
            }
            if ((ORD>=1) and (ORD<=4))
            {
                system("clear");
                
                switch (ORD)
                {
                    case 1:
                    {
                        cout << "\n\tHow Many Pounds Of Milk Chocolate Would You Like To Order? ";
                        cin >> Quanitity;
                        if (Quanitity<0)
                        {
                            Quanitity=Quanitity*-1;
                        }
                        break;
                    }
                        
                    case 2:
                    {
                        cout << "\n\tHow Many Pounds Of Dark European Chocolate Would You Like To Order? ";
                        cin >> Q_DEC;
                        if (Q_DEC<0)
                        {
                            Q_DEC=Q_DEC*-1;
                        }
                        break;
                    }
                        
                    case 3:
                    {
                        cout << "\n\tHow Many Pounds Of White Chocolate Would You Like To Order? ";
                        cin >> Q_WTC;
                        if (Q_WTC<0)
                        {
                            Q_WTC=Q_WTC*-1;
                        }
                        break;
                    }
                        
                    case 4:
                    {
                        cout << "\n\tHow Many Pounds Of European Truffles Would You Like To Order? ";
                        cin >> Q_EUT;
                        if (Q_EUT<0)
                        {
                            Q_EUT=Q_EUT*-1;
                        }
                        break;
                    }
                }
            }
            system ("clear");
        }
        //Clear
        system("clear");
        
        //Calculations
        T_MLC=Quanitity*P_MLC;
        T_DEC=Q_DEC*P_DEC;
        T_WTC=Q_WTC*P_WTC;
        T_EUT=Q_EUT*P_EUT;
        
        T_SUB=T_MLC+T_DEC+T_WTC+T_EUT;
        T_QTT=Quanitity+Q_DEC+Q_WTC+Q_EUT;
        
        //If T_QTT=0
        if (T_QTT==0)
        {
            system ("clear");
            
            cout << "\n\tYou Did Not Ordered Anything.";
            cout << "\n\tPress Any Key to Exit.";
            
           // getch();
            exit(0);
        }
        
        //Discounts
        if ((T_SUB<40)and(T_SUB>20))
        {
            T_DIS=T_SUB*.1;
            O_DIS=10;
        }
        else
        {
            if ((T_SUB>=40)and(T_SUB<60))
            {
                DIS=2;
            }
            else
            {
                if ((T_SUB>=60)and(T_SUB<28))
                {
                    DIS=3;
                }
                else
                {
                    if (T_SUB>=80)
                    {
                        DIS=4;
                    }
                }
            }
        }
        
        switch (DIS)
        {
            case 1:
            {
                T_DIS=T_SUB*.1;
                O_DIS=10;
                break;
            }
            case 2:
            {
                T_DIS=T_SUB*.15;
                O_DIS=15;
                break;
            }
            case 3:
            {
                T_DIS=T_SUB*.20;
                O_DIS=20;
                break;
            }
                
            case 4:
            {
                T_DIS=T_SUB*.25;
                O_DIS=25;
                break;
            }
        }
        
        //Discount Applied, S&H and Grand Total
        T_SAD=T_SUB-T_DIS;
        T_SPH=T_SAD*R_SPH;
        T_TOT=T_SAD+T_SPH;
        
        //Invoice
        cout << "\n\tSugar INC. Invoice";
        cout << "\n\n\tCustomer ID: "<<CUS_ID;
        
        if (Quanitity>0)
        {
            cout << "\n\t"<<Quanitity<<"lbs Of Milk Chocolate Ordered @ $"<<P_MLC<<" Per Pound ------------ $"<<T_MLC;
        }
        
        if (Q_DEC>0)
        {
            cout << "\n\t"<<Q_DEC<<"lbs Of Dark European Chocolate Ordered @ $"<<P_DEC<<" Per Pound --- $"<<T_DEC;
        }
        
        if (Q_WTC>0)
        {
            cout << "\n\t"<<Q_WTC<<"lbs Of White Chocolate Ordered @ $"<<P_WTC<<" Per Pound ---------- $"<<T_WTC;
        }
        
        if (Q_WTC>0)
        {
            cout << "\n\t"<<Q_WTC<<"lbs Of White Chocolate Ordered @ $"<<P_WTC<<" Per Pound ---------- $"<<T_WTC;
        }
        
        cout << "\n\n\tSubtotal ------------------------------------------------------- $"<<T_SUB;
        cout << "\n\tYour Order Qualifies For A "<<O_DIS<<"% Discount.";
        
        
        cout << "\n\n\tSubtotal After Discount ---------------------------------------- $"<<T_SAD;
        cout << "\n\tShipping And Handling @ "<<O_SPH<<"% (Based on Subtotal Of $"<<T_SAD<<") ---- $"<<T_SPH;
        
        cout << "\n\n\tGrand Total ---------------------------------------------------- $"<<T_TOT;
        
        cout << "\n\n\tThank You For Your Order, Press Any Key To Continue";
        //getch();
        
        system ("clear");
        
        cout << "\n\tWould You Like to Create Another Order? (y or n)";
        
        cin >> AGN;
        
        system ("clear");
    }
}
