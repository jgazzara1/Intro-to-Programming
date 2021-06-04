//  Name: John Gazzara
//  Assignment #2
//  I pledge my honor that I have abided by the Stevens Honor System. -John Gazzara
//  This program runs on mac


#include <iostream>
using namespace std;

int main()
{
    double number1;
    double number2;
    double resultadd;
    double resultsub;
    double resultmult;
    double resultdiv;
    
    //this is a comment, the consle will ignore it
    
    cout << "Enter a number: " << endl;
    cin >> number1; 
    
    cout << "Okay, give me another number: " << endl;
    cin >> number2;
    
    cout << "Wanna try some magic? (no not gradarius)" << endl;
    
    //this is one varianble
    resultadd = number1 + number2;
    resultsub = number1 - number2;
    resultmult = number1 * number2;
    resultdiv = number1 / number2;

    cout << "The sum of those numbers is: " << resultadd << endl;
    cout << "The difference of those numbers is: " << resultsub << endl;
    cout << "The product of those numbers is: " << resultmult << endl;
    cout << "The quotient of those numbers is: " << resultdiv << endl;
    
}
