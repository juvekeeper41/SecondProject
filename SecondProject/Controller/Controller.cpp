//
//  Controller.cpp
//  SecondProject
//
//  Created by Osborne, Jacob on 1/27/17.
//  Copyright © 2017 Osborne, Jacob. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>

using namespace std;

int Controller :: changeNumber()
{
    return 40;
}
    
    void Controller :: changeWithPointer(int * numberPointedTo)
    {
        cout << "Type in a number, please " << endl;
        int derpy;
        cin >> derpy;
        
        *numberPointedTo += 9000;
    }

void Controller :: start()
{
    cout << "Peers said to input 'Hello, world!'" << endl;
    int sent = 874;
    
    int * numberPointer = &sent;
    
    cout << sent << endl;
    cout << "Here is my number again " << sent << endl;
    tryNumbers(sent);
    sent = changeNumber();
    changeWithPointer(numberPointer);
    cout << "Changed? " << sent << endl;
}

void Controller :: tryNumbers(int sent)
{
    cout << "I was sent " << sent << endl;
    sent = (12 + 47 + 9264) / sent;
    cout << sent << " Is the new value" << endl;
    

    cout << "Changed?? " << sent << endl;
}



