//  Name: John Gazzara
//  Assignment #4 Part 2
//  I pledge my honor that I have abided by the Stevens Honor System. -John Gazzara
//  This program runs on Mac.

#include <iostream>
using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int max1(-1000000);
    int min1(1000000);
    int max2(-1000000);
    int min2(1000000);
    int max3(-1000000);
    int min3(1000000);
    float avg1(0);
    float avg2(0);
    float avg3(0);
    
for(i)
    cout << "Enter me a number: " << endl;
        while(number1 != -999)
        {
            cin >> number1;
        }
    
        while(number1 == -999)
        {
            if ( number1 > max1)
            {
                max1 = number1;
            }
            
            if (number1 < min1)
            {
                min1 = number1;
            }
            
            avg1 += number1;
            
            cout << "The maxmum value is: " << max1 << endl;
            cout << "The minimum value is: " << min1 << endl;
            cout << "The average is: " << avg1/10 << endl;
            
        }
    
    cout << "Enter me a number: " << endl;
    while(number2 != -999)
    {
        cin >> number2;
    }
    
    while(number2 == -999)
    {
        if ( number2 > max2)
        {
            max2 = number2;
        }
        
        if (number2 < min2)
        {
            min2 = number2;
        }
        
        avg2 += number2;
        
        cout << "The maxmum value is: " << max2 << endl;
        cout << "The minimum value is: " << min2 << endl;
        cout << "The average is: " << avg2/10 << endl;
    }
    
    cout << "Enter me a number: " << endl;
    while(number3 != -999)
    {
        cin >> number3;
    }
    
    while(number3 == -999)
    {
        if ( number3 > max3)
        {
            max3 = number3;
        }
        
        if (number3 < min3)
        {
            min3 = number3;
        }
        
        avg3 += number3;
        
        cout << "The maxmum value is: " << max3 << endl;
        cout << "The minimum value is: " << min3 << endl;
        cout << "The average is: " << avg3/10 << endl;
        
        return 69;
    }
}
