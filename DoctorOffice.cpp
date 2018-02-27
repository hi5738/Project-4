/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "DoctorOffice.h"

const char* week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

DoctorOffice::DoctorOffice(){
    openHours[0] = "8am";
    openHours[1] = "9am";
    openHours[2] = "10am";
    openHours[3] = "11am";
    openHours[4] = "1pm";
    openHours[5] = "2pm";
    openHours[6] = "3pm";
    openHours[7] = "4pm";
    openHours[8] = "5pm";
    for(int i = 0; i < 9; i++)
        freeSlot = true;
}

bool DoctorOffice::open(int year, int month, int day){
    time_t nowTime;
    struct tm* timeInfo;
    time ( &nowTime );
    timeInfo = localtime ( &nowTime );
    timeInfo->tm_year = year - 1900;
    timeInfo->tm_mon = month - 1;
    timeInfo->tm_mday = day;
    mktime(timeInfo);
    //office is closed on weekends; returns false if Sat or Sun
    if ( week[timeInfo->tm_wday] == "Sunday" || week[timeInfo->tm_wday] == "Saturday" )
        return false;
    else
        //returns true if it is a weekday
        return true;
}

void DoctorOffice::showAvailTimes(){
    for(int i = 0; i < 9; i++){
        if(freeSlot[i] == true)
            cout << openHours[i];
    }
}

void DoctorOffice::setAvailTimes(string apptTime){
    bool found = false;
    int count = 0;
    while (found == false || count == 9){
        if(openHours[count] != apptTime)
            count++;
        if(openHours[count] == apptTime && freeSlot[count] == true){
            freeSlot[count] == false;
            cout << "Patient appointment is entered." << endl;
        }else{
            cout << "Another patient already took this time slot." << endl;
            break;
        }                 
    }
}

