//
//  main.cpp
//  Ticket
//
//  Created by Dong Hyun Lee on 2/25/19.
//  Copyright © 2019 Dong Hyun Lee. All rights reserved.
//
#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>
#include <cctype>
#include <cmath>
#include <cstdlib>
using namespace std;

class Ticket
{
public:
    enum KIND{ATHLETICGAME,CONCERT,MOVIE,OTHER};
    Ticket();
    Ticket(string row, int seat, string event, string venue, double price, KIND kind, string daytime);
    string getRow();
    int getSeat();
    string getEvent();
    string getVenue();
    double getPrice();
    void setPrice(double price);
    KIND getKind();
    string getDayTime();
    
    
    
    
private:
    string mRow;
    int mSeat;
    string mEvent;
    string mVenue;
    double mPrice;
    KIND mKind;
    string mDayTime;
};

#endif
