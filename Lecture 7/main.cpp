//
//  main.cpp
//  Lecture 7
//
//  Created by John Gazzara on 11/11/16.
//  Copyright © 2016 John Gazzara. All rights reserved.
//

#include <iostream>
using namespace std;

void dispenseCoke()
{
    cout << "Dispensing coke" << endl;
}

void dispenseSprite()
{
    cout << "Dispensing sprite" << endl;
}

void dispenseWater()
{
    cout << "Dispensing water" << endl;
}

int main()
{
   while(1)
   {
       int choice;
       
        cout << "Enter 1 for coke" << endl;
        cout << "Enter 2 for sprite" << endl;
        cout << "Enter 3 for water" << endl;
        cout << "Anythign else to quit" << endl;
        cin >> choice;
       
       switch(choice)
       {
           case 1 : dispenseCoke();
                    break;
       
           case 2 : dispenseSprite();
                    break;
       
           case 3 : dispenseWater();
                    break;
               
            default : exit(1);
       }
       
       
       
       
   }
    
}
