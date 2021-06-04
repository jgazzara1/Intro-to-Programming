//  Name: John Gazzara
//  Assignment #4 Part 1
//  I pledge my honor that I have abided by the Stevens Honor System. -John Gazzara
//  This program runs on Mac.

#include <iostream>
using namespace std;


int main ()
    {
        int num(0);
        int max(-1000000);
        int min(1000000);
        float avg(0);
        
        cout << "Please enter 10 numbers, so that I can show you the max, min, and average \n";
        for (int i(0); i<10; i++)
        {
            cin >> num;
            if ( num > max)
            {
                max = num;
            }
            
            if (num < min)
            {
                
                min = num;
                
            }
            
            avg += num;
            
        }
            
        cout << "The maxmum value is: " << max << endl;
        cout << "The minimum value is: " << min << endl;
        cout << "The average is: " << avg/10 << endl;
        
    }
    
    

