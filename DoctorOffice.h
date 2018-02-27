//**************************************************************************
//NOT TESTED YET, PROGRAM DESIGNED FOR A WEEK, FIGURING OUT FOR MONTHS ATM
//**************************************************************************

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#ifndef DOCTOROFFICE_H
#define DOCTOROFFICE_H

class DoctorOffice{
private:
    string openHours[9];
    bool freeSlot[9];
    
public:
    DoctorOffice();
    bool open();
    void showAvailTimes();
    void setAvailTimes();   
};

#endif /* DOCTOROFFICE_H */

