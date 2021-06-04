//
//  main.cpp
//  Lecture 6
//
//  Created by John Gazzara on 11/4/16.
//  Copyright © 2016 John Gazzara. All rights reserved.
//

#include <iostream>
using namespace std;

//first kind takes something and returns something
int add(int x, int y)
{
    int result;
    result = x + y;
    return result;
}

//second takes nothing gives nothing back --(void) means nothing is taken or given
void drawSomething()
{
    cout << "|" << "-----------" << "|" << endl;
}

//third kind takes something gives back nothing
void magnifyThis(int x)
{
    cout << "--------------------" << endl;
    cout << x * 2 << endl;
    cout << "--------------------" << endl;
}

int main()
{
    int num1;
    int num2;
    cout << "Enter 2 numbers: " << endl;
    cin >> num1;
    cin >> num2;
    
    //use add
    int response = add(num1, num2);
    cout << response << endl;
    cout << add(5, 4) << endl;
    
    //use drawsomething
    drawSomething();
    
    //use magnifythis
    magnifyThis(23);
    
}
