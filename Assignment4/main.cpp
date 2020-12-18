
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>


using namespace std;


int main ()


{
//Precision
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
    
//Intro
    cout << "\n\tWelcome To The Employee Data Machine.";
    
//Loop App
    int OPT=0;
    while (OPT != 3)
    {
    
//Variables
        int REC;
        float TAX, GROSSPAY, NETPAY, TAXRATE_O;
        float HRS, PAYRATE, TAXRATE;
        string LNAME, FNAME, WORKID;
        string FILENAME;
        ofstream OUTDAT;
        ifstream INDAT;
        
//Inilizations
        FILENAME = "/Users/manavjotsingh/Documents/CSCI/CSCI 14/Assignment4/Assignment4/Personnel.dat";
        
        REC=0;
        
//Menu
        cout << "\n\n\t\tMenu";
        cout << "\n\n\t1 - Write New Records";
        cout << "\n\t2 - Display Records";
        cout << "\n\t3 - Exit";
        cout << "\n\n\tSelect Option #: ";
        cin >> OPT;
        
        system ("clear");

//Options
        switch (OPT)
        {
                
//Writing To File
            case 1:
            {
                
                cout << "\n\t\tInput Data";
                
                cout << "\n\n\tEnter Employee Last Name: ";
                cin >> LNAME;
                
                cout << "\n\tEnter Employee First Name: ";
                cin >> FNAME;
                
                cout << "\n\tEnter Worker ID: ";
                cin >> WORKID;
                
                cout << "\n\tEnter Hours Worked: ";
                cin >> HRS;
                
                cout << "\n\tEnter Pay Rate: ";
                cin >> PAYRATE;
                
                cout << "\n\tEnter Tax Rate: ";
                cin >> TAXRATE;
                
                OUTDAT.open (FILENAME, ios::app);
                
                OUTDAT << LNAME<<" "<<FNAME<<" "<<WORKID<<" "<<HRS<<" "<<PAYRATE<<" "<<TAXRATE<<"\n";
                
                OUTDAT.close();
                
                cout << "\n\n\tNew Data Has Been Saved To "<<FILENAME;
                cout << "\n\tPress Any Key To Return To The Menu";
                
                getchar ();
                system ("clear");
                
                break;
            }
            
//Reading From File
            case 2:
            {
                INDAT.open(FILENAME);
                INDAT >> LNAME >> FNAME>>WORKID>>HRS>>PAYRATE>>TAXRATE;
                
                cout << "\n\tReading Data..";
                
                while (!INDAT.eof())
                {

            //Counter
                    REC++;
                    
            //Calculations
                    TAXRATE_O=TAXRATE*100;
                    GROSSPAY=PAYRATE*HRS;
                    TAX=TAXRATE*GROSSPAY;
                    NETPAY=GROSSPAY-TAX;
                    
            //Output
                    cout << "\n\n\tRecord # "<<REC;
                    cout << "\n\tWorker ID: "<<WORKID;
                    cout << "\n\tLast Name: "<<LNAME<<setw(15)<<"First Name: "<<FNAME;
                    cout << "\n\tHours Worked: "<<setprecision(1)<<HRS<<"\tPay Per Hour: $"<<setprecision(2)<<PAYRATE<<" ---> Gross Pay: $"<<GROSSPAY;
                    cout << "\n\tTax Rate: "<<TAXRATE_O<<"% \tTaxes: $"<<TAX<<" ---> Net Pay: $"<<NETPAY;
                    
            //Read
                    INDAT >>LNAME>>FNAME>>WORKID>>HRS>>PAYRATE>>TAXRATE;
                    
                }
                
                INDAT.close();
                
                cout << "\n\n\tEnd Of Data";
                cout << "\n\tPress Any Key To Return To Menu";
                
                getchar ();
                system ("clear");
                
                break;
            }
                
        }
    }
}
