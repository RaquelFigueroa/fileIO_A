//Name:Raquel Figueroa
//Date:20 October 2015
//Description:figueroa_filesIO.cpp

#include <iostream>//cin, cout
#include <fstream>//file input/output
#include <cstdlib>//exit(1)
#include <cctype>//toupper

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout, foutCaps, foutFirstCaps;
    string strA, strCap, capChar, strFirstCap, firstCap;
    int aveChar(0), countWord(0), countChar(0);
    int val1(0), val2(0), val3(0), val4(0), val5(0), val6(0);
    int val7(0), val8(0), val9(0), val10(0), val11(0), val12(0);
    
    
    fin.open("gba.txt");
    if (fin.fail())
    {
        cout << "File in failed." << endl;
        exit(1);
    }
    
    fout.open("results.txt");
    if (fout.fail())
    {
        cout << "File out failed." << endl;
        exit(1);
    }
    
    foutCaps.open("capitalize.txt");
    if (foutCaps.fail())
    {
        cout << "Capitalize file failed." << endl;
        exit(1);
    }
    
    foutFirstCaps.open("uppercase.txt");
    if (foutFirstCaps.fail())
    {
        cout << "Capitalize First file failed." << endl;
        exit(1);
    }
    
    while (fin >> strA)
    {
        strCap = "";
        for (int i = 0; i < strA.length(); i++)
        {
            countChar++;
            capChar = toupper(strA.at(i));
            strCap += capChar;
            
            strA.at(0) = toupper(strA.at(0));
                
        }  
        
        foutCaps << strCap << " ";
        foutFirstCaps << strA << " ";
        
        countWord++;
            
        switch (strA.length())
        {
            case 1: val1++;
                break;
            case 2: val2++;
                break;
            case 3: val3++;
                break;
            case 4: val4++;
                break;    
            case 5: val5++;
                break;
            case 6: val6++;
                break;  
            case 7: val7++;
                break;  
            case 8: val8++;
                break;  
            case 9: val9++;
                break;  
            case 10: val10++;
                break;    
            default: val11++;
                break;    
        }
    }
    
    aveChar = countChar / countWord;
    
    //cout << "num chars: " << countChar << endl;

    fout << "Average characters per word: " << aveChar << endl
         << "\n"
         << val1 << " words of length 1\n"
         << val2 << " words of length 2\n"
         << val3 << " words of length 3\n"
         << val4 << " words of length 4\n"
         << val5 << " words of length 5\n"
         << val6 << " words of length 6\n"
         << val7 << " words of length 7\n"
         << val8 << " words of length 8\n"
         << val9 << " words of length 9\n"
         << val10 << " words of length 10\n"
         << val11 << " words of length 11 or longer\n";
         
    fout << "\n"
         << "Total number of words:" << countWord << endl;
    
    
    
    
    fin.close();
    fout.close();
    foutCaps.close();
    foutFirstCaps.close();
    
    return 0;
}
