
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <sstream>


using namespace std;


int main ()
{
//Loop APP
    int OPT = 0;
    
    while (OPT != 4)
    {
        
//Varaibles
        string INTEXT, INCODE, CODE, TEXT, COPYTEXT;
        string FIND, REPLACE;
        float LENGTH, INDEX, COUNT, LENMOR, BEF, COPYINDEX;
        
        string ALPHA [39] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
                             "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
                             "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "STOP", ",", "?"};
        
        string MORSE [39] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
                             "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
                             ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----", ".-.-.-", "--..--", "..--.."};
        
//Inilizatons
        CODE.clear();
        TEXT.clear();
        INTEXT.clear();
        INCODE.clear();
        COPYTEXT.clear();
        
        
        
        INDEX = -1;
        COUNT = 0;
        LENMOR = 0;
        
//Menu
        cout << "\n\tMorse Code Translator";
        
        cout << "\n\n\tMenu";
        
        cout << "\n\n\t1 - Morse to Text";
        cout << "\n\t2 - Text to Morse";
        cout << "\n\t3 - Display Key";
        cout << "\n\t4 - Quit";
        
        cout << "\n\n\tOPT (1 to 4) - ";
        cin >> OPT;
        
        cin.ignore();
        system ("clear");
        
//Options
        switch (OPT)
        {
                
//Decode
            case 1:
            {
                cout << "\n\tEnter Morse Code Into Decoder (.- -... -.-. -..  . ..-. --. ....): \n\t";
                getline (cin, INCODE);
                
                cin.clear();
                
                system ("clear");
                
    //Length and Copy
                TEXT = INCODE + " ";

                LENGTH = TEXT.length();
                
    //Find And Replace
                for (int C = 0; C < 39; C++)
                {
                    FIND = MORSE [C] + " ";
                    REPLACE = ALPHA [C];
                    INDEX = TEXT.find (FIND);
                    LENGTH = TEXT.length();
                    LENMOR = FIND.length();
                    
                    while (LENGTH > INDEX)
                    {
                        BEF = TEXT [INDEX-1];
                        
                        if ((BEF != '.') and (BEF != '-'))
                        {
                            TEXT.replace (INDEX ,LENMOR ,REPLACE);
                            
                            LENGTH = TEXT.length();
                            INDEX = TEXT.find (FIND);
                        }
                        else
                        {
                            COPYTEXT = TEXT;
                            COPYTEXT.replace(0, INDEX, "*");
                            COPYINDEX = COPYTEXT.find(FIND);
                            INDEX = COPYINDEX + INDEX;
                        }
                    }
                }
                
    //Output
                cout << "\n\tDecryption Completed";
                cout << "\n\n\t Original Morse : " << INCODE;
                cout << "\n\t Morse in Text : " << TEXT;
                
                cout << "\n\n\tPress Any Key To Return To Menu";
                
                getchar();
                system ("clear");
                break;
            }
                
//Encode
            case 2:
            {
                cout << "\n\tEnter Text Into Encoder : \n\t";
                getline (cin, INTEXT);

                cin.clear();
                
                system ("clear");
                
    //Length and Copy
                LENGTH = INTEXT.length();
                CODE = INTEXT;
                
    //Upper and Stop
                for (int B = 0; B < LENGTH; B++)
                {
                    CODE [B] = toupper(CODE [B]);
                }
                
                CODE = CODE + ".-.-.-";
                
    //Find And Replace
                for (int A = 0; A < 39; A++)
                {
                    FIND = ALPHA [A];
                    REPLACE = MORSE [A] + " ";
                    INDEX = CODE.find (FIND);
                    LENGTH = CODE.length();
                    
                    while (LENGTH > INDEX)
                    {
                        CODE.replace(INDEX ,1 ,REPLACE);
                        
                        INDEX = CODE.find (FIND);
                        LENGTH = CODE.length();
                    }
                }
                
    //Output
                cout << "\n\tEncryption Completed";
                cout << "\n\n\tOriginal Text : " <<  INTEXT;
                cout << "\n\tText In Morse : " << CODE;
                
                cout << "\n\n\tPress Any Key To Return To Menu";
                
                getchar();
                system ("clear");
                break;
            }
                
//Display Key
            case 3:
            {
                cout << "\n\tAlpha to Morse Key \n";
                
                for (int D = 0; D < 39; D++)
                {
                    if (D % 4 == 0)
                    {
                        cout << "\n";
                    }
                    
                    cout << setw(7) << ALPHA [D] << setw(8) << MORSE [D];
                }
                
                cout << "\n\n\tPress Any Key To Return To Menu";
                
                getchar();
                cin.clear();
                
                system ("clear");
                break;
            }
        }
    }
}


