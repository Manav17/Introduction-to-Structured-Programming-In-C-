
#include <iostream>

using namespace std;

#include "Meep.h"

int main()
{
 //   double Total= 0;
//    double Discount = 0;
//    int OPT;
//    float MLKlbs, DClbs;
//
//    while(OPT != 3)
//    {
//        OPT = menu("Add To Invoice", "Milk Chocolate", "Dark Chocolate", "Exit");
//
//
//        switch (OPT)
//        {
//            case 1:
//                cout << "\n\tHow Many Pounds?";
//                cin >> MLKlbs;
//                while (MLKlbs < 0)
//                {
//                    cout << "\n\tCan't Order Negative, How Many Pounds?";
//                    cin >> MLKlbs;
//                }
//                break;
//            case 2:
//                cout << "\n\tHow Many Pounds?";
//                cin >> DClbs;
//                while (DClbs < 0)
//                {
//                    cout << "\n\tCan't Order Negative, How Many Pounds?";
//                    cin >> DClbs;
//                }
//                break;
//        }
//    }
//
////    if(Choice == 1)
////    {
////        Total = 10;
////    }
////    else if(Choice ==2)
////    {
////        Total = 20;
////    }
////    else
////    {
////        Total = 100;
////    }
//
//    cout << "\n\tTotal " << Total;
//
//    if ((Total >= 20) and ( Total <= 39.99))
//    {
//        Discount = .1;
//    }
//    else if ((Total >= 40) and (Total <= 59.99))
//    {
//        Discount = .15;
//    }
//    else if ((Total >= 60) and (Total <= 79.99))
//    {
//        Discount = .2;
//    }
//    else if (Total >= 80)
//    {
//        Discount = .25;
//    }
//
//    cout << "\n\tDiscount " << Discount;
    
    
    int limit = 10;
    
    for(int x = 0; x < limit; x++)
    {
        cout << "\n\t :) -- " << x;
    }
    
    int y = 10;
    
    cout << "\n\t :> -- " << y;
    y++;
    while(y < (limit + 5))
    {
        cout << "\n\t :> -- " << y;
        y++;
    }
          int z =0;

    
    do
    {
      
        cout << "\n\t :D -- " << z;
        z++;
    } while(z < (limit + 5));
    

    for(int i=0;i<=10;i++)
    {
        cout << "p";
    }

}
