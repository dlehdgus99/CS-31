#include <iostream>
#include "BoxOffice.h"
#include <string>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include "Ticket.h"
using namespace std;


BoxOffice::BoxOffice()
{
    
}

Ticket BoxOffice::buyTicket( string row, int seat, string event, string venue, Ticket::KIND kind, string daytime )
{
    Ticket t=Ticket{row,seat,event,venue,0,kind,daytime};
    t.setPrice(0);
    return t;
}

Ticket BoxOffice::buyRoyceHallStudentTicket( string row, int seat, string event, Ticket::KIND kind, string daytime )
{
    Ticket t=Ticket{row,seat,event,"Royce Hall",0,kind,daytime};
    t.setPrice(2);
    return t;
}

 Ticket BoxOffice::buyRoyceHallStaffTicket( string row, int seat, string event, Ticket::KIND kind, string daytime )
{
    Ticket t=Ticket{row,seat,event,"Royce Hall",0,kind,daytime};
    t.setPrice(1);
    return t;
}
Ticket BoxOffice::buyRoyceHallTicket( string row, int seat, string event, Ticket::KIND kind, string daytime )
{
    Ticket t=Ticket{row,seat,event,"Royce Hall",0,kind,daytime};
    t.setPrice(0);
    return t;

}
