Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

If the book is returned on or before the expected return date, no fine will be charged (i.e.:  fine=0).
If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, 
   fine= 15* (the  number of days late).
If the book is returned after the expected return month but still within the same calendar year as the expected return date, the .
     fine= 500 * (number of days late)
If the book is returned after the calendar year in which it was expected, there is a fixed fine of . 10000

     Sample Input

9 6 2015
6 6 2015
Sample Output

45

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ad,am,ay;
    cin>> ad>>am>>ay;
    
    int ed,em,ey;
    cin>>ed>>em>>ey;
    
    if(ay== ey)
    {
        if(am==em)
        {
            if(ad==ed)
            {
                 cout<<0<<endl;
            }
            else
            {
                if(ad>ed)
                {
                  int fine = 15*(ad-ed);
                  cout<<fine<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
            
        }
        else
        {
            if(am>em)
            {
                int fine= 500*(am-em);
                cout<<fine<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        
    }
    else{
        if(ay>ey){
            cout<<10000<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
