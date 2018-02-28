//************************************
//Not Finished Yet Continuing Tonight
//************************************
//
//  Created by Andrew on 2/27/18.
//  Copyright © 2018 Andrew. All rights reserved.
//
#include <iostream>
#include <string>


using namespace std;
#ifndef Menu_h
#define Menu_h

class Menu
{
private:
    int choice, choice2;
    int minute,hour, month, day, year; //for testing
public:
    Menu();
    ~Menu();
    void start();
    bool appointFound(); // used during testing
};

#endif /* Menu_h */
