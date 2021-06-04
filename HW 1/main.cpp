//  Name: John Gazzara
//  Assignment #5
//  I pledge my honor that I have abided by the Stevens Honor System. -John Gazzara
//  This program runs on Mac.

#include <iostream>
using namespace std;

string series1;
string series2;

int main()
{
    cout << "Type in the first string of numbers: " << endl;
    cin >> series1;
    
    cout << "Type in the second string of numbers: " << endl;
    cin >> series2;
    
    cout << "The length of your first string is: " << series1.size() << endl;
    cout << "The length of your second string is: " << series2.size() << endl;
    
    if ( series1.size() == series2.size())
    {
       cout << "Your strings are equal length!" << endl;
    }
    else
    {
        cout << "Your strings are not equal length!" << endl;
    }
    
    
    if (series1.find(series2) != std::string::npos)
    {
        cout << "String 2 found within String 1!" << endl;
    }
    else if (series2.find(series1) != std::string::npos)
    {
        cout << "String 1 found within  String 2!" << endl;
    }
    else
    {
        cout << "No strings found in other strings." << endl;
    }
}
