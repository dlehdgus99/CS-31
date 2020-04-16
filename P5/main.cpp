#include <string>
#include <cassert>
#include <iostream>
#include "Project5Helper.h"
#include "BoxOffice.h"
#include "Ticket.h"
using namespace std;
int main()
{
    Ticket t( "Pavillion Row 13", 45, "Dodgers vs. Brewers", "Dodger Stadium", 150.00, Ticket::KIND::ATHLETICGAME, "August 1, 7:30PM" );
    BoxOffice b;
    assert( std::to_string( t.getPrice() ) == "150.000000" );
    assert( t.getKind() == Ticket::KIND::ATHLETICGAME );
    assert( t.getRow() == "Pavillion Row 13" );
    assert( t.getSeat() == 45 );
    
    t = b.buyRoyceHallStudentTicket( "Orchestra Row U", 20, "Episode VII: The Force Awakens", Ticket::KIND::MOVIE, "September 1, 7:30PM" );
    assert( std::to_string( t.getPrice() ) == "20.000000" );
    assert( t.getKind() == Ticket::KIND::MOVIE );
    assert( t.getRow() == "Orchestra Row U" );
    assert( t.getSeat() == 20 );
    
    t = b.buyRoyceHallStaffTicket( "Balcony Row J", 120, "An Evening With David Sedaris", Ticket::KIND::OTHER, "October 1, 7:30PM" );
    assert( std::to_string( t.getPrice() ) == "35.000000" );
    assert( t.getKind() == Ticket::KIND::OTHER );
    assert( t.getRow() == "Balcony Row J" );
    assert( t.getSeat() == 120 );
    
    t = b.buyRoyceHallTicket( "Orchestra Row A", 12, "Barry Manilow Live In Concert", Ticket::KIND::CONCERT, "November 1, 7:30PM" );
    assert( std::to_string( t.getPrice() ) == "130.000000" );
    assert( t.getKind() == Ticket::KIND::CONCERT );
    assert( t.getRow() == "Orchestra Row A" );
    assert( t.getSeat() == 12 );
    
    cout << "all tests passed!" << endl ;

    return 0;
}
