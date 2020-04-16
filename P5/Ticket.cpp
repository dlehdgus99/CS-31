//
//  main.cpp
//  Ticket.cpp
//
//  Created by Dong Hyun Lee on 2/25/19.
//  Copyright © 2019 Dong Hyun Lee. All rights reserved.
//

#include <iostream>
#include "Ticket.h"
#include <string>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include "BoxOffice.h"
#include "Project5Helper.h"
using namespace std;


Ticket::Ticket(string row, int seat, string event, string venue, double price, KIND kind, string daytime)
{
    mRow=row;
    mSeat=seat;
    mEvent=event;
    mVenue=venue;
    mPrice=price;
    mKind=kind;
    mDayTime=daytime;
}


string Ticket::getRow()
{
    return mRow;
}

int Ticket::getSeat()
{
    return mSeat;
}
string Ticket::getEvent()
{
    return mEvent;
}
string Ticket::getVenue()
{
    return mVenue;
}
double Ticket::getPrice()
{
    return mPrice;
}

void Ticket::setPrice(double price)
{
    Project5Helper a;
    
    
    
    
    if (mKind==ATHLETICGAME)
        mPrice=75;
    
    
    if (mKind==CONCERT)
    {
        mPrice=50;
        if(a.endsWithPM(mDayTime))
            mPrice=65;
    }
    
    
    
    
    if (mKind==MOVIE)
        mPrice=12.50;
    
    
    
    if (mKind==OTHER)
    {
        mPrice=40;
        if(a.endsWithPM(mDayTime))
            mPrice=55;
    }
    
    
    if (a.startsWithOrchestra(mRow))
        mPrice*=2;
    
    
    
    if (price==1)
    {
        if(mPrice>=40)
            mPrice-=20;
        else
            mPrice*=0.9;
    }
    
    
    
    if (price==2)
    {
        if(mPrice>=40)
            mPrice-=30;
        else
            mPrice*=0.8;
    }
    
    
    
        
        
    
    
    
}

Ticket::KIND Ticket::getKind()
{
    return mKind;
}

string Ticket::getDayTime()
{
    return mDayTime;
}



