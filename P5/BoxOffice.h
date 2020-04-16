#ifndef BOXOFFICE_H
#define BOXOFFICE_H

#include <string>
#include <iostream>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include "Ticket.h"
using namespace std;

class BoxOffice
{
public:
    BoxOffice();
    Ticket buyTicket(string row, int seat, string event, string venue, Ticket::KIND kind, string daytime);
    Ticket buyRoyceHallStudentTicket(string row, int seat, string event, Ticket::KIND kind, string daytime);
    Ticket buyRoyceHallStaffTicket(string row, int seat, string event, Ticket::KIND kind, string daytime);
    Ticket buyRoyceHallTicket(string row, int seat, string event, Ticket::KIND kind, string daytime);

    
};
#endif
