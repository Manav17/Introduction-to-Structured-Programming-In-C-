
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main ()
{
    //Variables
    
    string SHIP_ID;
    float Q_PA1, Q_PA2, Q_UVT, Q_TRI, Q_COM; //Quantity
    float P_PA1, P_PA2, P_UVT, P_TRI, P_COM; //Price
    float T_PA1, T_PA2, T_UVT, T_TRI, T_COM; //Total
    float R_TAX, R_SPH, O_TAX, O_SPH; //Rate and Output Rate
    float T_SUB, T_TAX, T_SPH, T_TOT;
    
    //Price, Tax, S&H
    
    P_PA1=18.99;
    P_PA2=21.97;
    P_UVT=10.99;
    P_TRI=13.98;
    P_COM=14.98;
    
    R_TAX=.095;
    R_SPH=.1;
    
    O_TAX=100*R_TAX;
    O_SPH=100*R_SPH;
    
    //Quantity Input
    
    cout << "\n\tWelcome To Away Team Supply Co.";
    
    cout << "\n\n\t(1 of 6)Enter Starship Identification(e.g. NCC-1701-A):      ";
    cin >> SHIP_ID;
    
    cout << "\n\t(2 of 6)Enter Quantity Of Type-1 Phasers:                      ";
    cin >> Q_PA1;
    
    cout << "\n\t(3 of 6)Enter Quantity Of Type-2 Phasers:                      ";
    cin >> Q_PA2;
    
    cout << "\n\t(4 of 6)Enter Quantity Of Universal Translators:               ";
    cin >> Q_UVT;
    
    cout << "\n\t(5 of 6)Enter Quantity Of Tricorders:                          ";
    cin >> Q_TRI;
    
    cout << "\n\t(6 of 6)Enter Quantity Of Communicators:                       ";
    cin >> Q_COM;
    
    cout <<"\n\n\tPress Enter to Continue.";
    
    system("cls");
    
    //Calculations
    
    T_PA1=Q_PA1*P_PA1;
    T_PA2=Q_PA2*P_PA2;
    T_UVT=Q_UVT*P_UVT;
    T_TRI=Q_TRI*P_TRI;
    T_COM=Q_COM*P_COM;
    
    T_SUB=T_PA1+T_PA2+T_UVT+T_TRI+T_COM;
    
    T_TAX=R_TAX*T_SUB;
    T_SPH=R_SPH*T_SUB;
    
    T_TOT=T_TAX+T_SPH+T_SUB;
    
    //Itemized Display
    
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
    
    cout <<"\n\tAway Team Supply Co. ORDER SUMMARY";
    
    cout <<"\n\n\tStarship ID : "<<SHIP_ID;
    
    cout << "\n\n\tQuantity "<< Q_PA1<<" Type-1 Phasers Ordered @ $"<<P_PA1<<" each :         $"<<T_PA1;;
    
    cout <<   "\n\tQuantity "<< Q_PA2<<" Type-2 Phasers Ordered @ $"<<P_PA2<<" each :         $"<<T_PA2;
    
    cout <<   "\n\tQuantity "<< Q_UVT<<" Universal Translators Ordered @ $"<<P_UVT<<" each :  $"<<T_UVT;
    
    cout <<   "\n\tQuantity "<< Q_TRI<<" Tricoders Ordered @ $"<<P_TRI<<" each :              $"<<T_TRI;
    
    cout <<   "\n\tQuantity "<< Q_COM<<" Communicators Ordered @ $"<<P_COM<<" each :          $"<<T_COM;
    
    cout << "\n\n\tSubtotal :                         $"<<T_SUB;
    
    cout <<   "\n\tSales Tax @ "<<O_TAX<<"% :                 $"<<T_TAX;
    
    cout <<   "\n\tShipping and Handling @ "<<O_SPH<<"% :      $"<<T_SPH;
    
    cout << "\n\n\tGrand Total :                      $"<<T_TOT;
    
    cout << "\n\n\tPress Enter to Continue.";
    getch();
}

