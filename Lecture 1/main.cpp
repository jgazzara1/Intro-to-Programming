//
//  main.cpp
//  Lecture1
//
//  Created by John Gazzara on 9/16/16.
//  Copyright © 2016 John Gazzara. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    
    time_t t = time(0);struct tm * now = localtime( & t );
    cout << (now->tm_year + 1900) << '-'
    << (now->tm_mon + 1) << '-'
    <<  now->tm_mday
    << endl;
        cout << "Here's my message. From the lecture? \n";
        cout << "Here is another, because you are greedy. \n";
        cout << "You seriously want a third message? You're not getting it. \n";
        cout << "Here is a massage, compliments of me. \n";
        cout << "BOTTOM TEXT \n";
    
    //system("pause");
    return 1;
}
