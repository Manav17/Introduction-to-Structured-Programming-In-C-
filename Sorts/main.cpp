//
//  main.cpp
//  Sorts
//
//  Created by Manavjot Singh on 3/18/19.
//  Copyright © 2019 Manavjot Singh. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
    
    srand((unsigned)time(NULL));
    ofstream FOUT;
    ifstream FIN;
    
    int ARRY[100];
    int TEMP;
    
    for(int X = 0; X < 100; X ++)
    {
        ARRY[X] = rand()%100+1;
    }
    
    
    FOUT.open("/Users/manavjotsingh/Documents/CSCI/CSCI 14/Sorts/Sorts/Arry.dat", ios::app);
    
      FOUT << "\n";
    
    for(int X = 0; X < 100; X++)
    {
        FOUT << ARRY[X] << " ";
    }
    

    
    FOUT.close();
    
    FIN.open("/Users/manavjotsingh/Documents/CSCI/CSCI 14/Sorts/Sorts/Arry.dat", ios::in);
    
    while(!FIN.eof())
    {
        FIN >> TEMP;
        cout << TEMP << "\n";
    }
    
    
    
}
