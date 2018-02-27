//************************************
// Work Not Finished Continuing tonight
//*************************************
//
//  Created by Andrew on 2/27/18.
//  Copyright © 2018 Andrew. All rights reserved.
//
#include "Menu.h"

Menu::Menu()
{
    
}
Menu::~Menu()
{
    
}

void Menu::start()
{
    
    cout << "welcome\n1. Schedule Doctors Appointment\n2. Edit Doctors APpointment\n3. Remove Doctors Appointment" << endl;
    
    cin >> choice;
    
    
    if(choice == 1)
    {
        cout << "Creating New Doctors Appointment... " << endl;
        
        
        
        cout << "Set the Time" << endl;
        cout << "What hour:";         cin >> hour;
        cout << "Minutes: ";          cin >> minute;
        cout << "day:" << endl;       cin >> day;
        cout << "Month:" << endl;     cin >> month;
        cout << "year:" << endl;      cin >> year;
        
        
        //More Code Here...
    }
    if (choice == 2)
    {
        string name[10];
        cout << "Enter The Name for the appoitment..." << endl;
        cout << "Name: "; cin >> name[10];
        
        // Searches
        
        if (true) // testing if appointment found
        {
            cout << "Appointment Found..." << endl;
            
            cout << "What would you like to edit" << endl;
            cout << "1. Change the Name\n2. Change the Date\n3. Change the Time";
            cin >> choice2;
            if (choice2 == 1)
            {
                
            }
            if (choice2 == 2)
            {
                
            }
            if (choice2 == 3)
            {
                
            }
            else
            {
                return;
            }
            
        }
        else // for now code will never be executed
        {
            cout << "Appointment not found!" << endl;
        }
        
    }
    if (choice == 3)
    {
        cout << "Start Deleting Here" << endl;
        
        // More Code Here
    }
    else
    {
        cout << "now it quits" << endl;
    }
    
}
