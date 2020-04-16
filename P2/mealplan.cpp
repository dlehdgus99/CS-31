#include <iostream>
using namespace std;
#include <string>
int main() {
    string ticketOrBruincard;
    string typeOfMeal;
    string studentOrStaff;
    string resident;
    cout << "Ticket or BruinCard?";
    getline(cin,ticketOrBruincard);
    if (ticketOrBruincard!="Ticket" and ticketOrBruincard!="BruinCard")
    {
        cout << "The kind value must either be Ticket or BruinCard." << endl;
        return( 1 );
    }
    cout << "Breakfast, Lunch or Dinner?";
    getline(cin,typeOfMeal);
    if (typeOfMeal!="Breakfast" and typeOfMeal!="Lunch" and typeOfMeal!="Dinner")
    {
        cout << "The meal value must either be Breakfast, Lunch or Dinner." << endl;
        return( 1 );
    }
    if (ticketOrBruincard=="BruinCard")
    {
        cout << "Student or Staff?";
        getline(cin,studentOrStaff);
        if (studentOrStaff!="Student" and studentOrStaff!="Staff")
           {
               cout << "The type value must either be Student or Staff." << endl;
               return( 1 );
           }
        if (studentOrStaff=="Student")
        {
            cout << "Resident?";
            getline(cin,resident);
            if (resident!="Yes" and resident!="No")
            {
                cout << "The resident value must either be Yes or No." << endl;
                return( 1 );
            }
        }
    }
    
    if ((ticketOrBruincard == "Ticket") && (typeOfMeal == "Breakfast"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $12.50.";
    else if ((ticketOrBruincard == "Ticket") && (typeOfMeal == "Lunch"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $14.50.";
    else if ((ticketOrBruincard == "Ticket") && (typeOfMeal == "Dinner"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $17.00.";
    else if ((ticketOrBruincard == "BruinCard") && (typeOfMeal == "Breakfast") && (studentOrStaff=="Student") && (resident=="Yes"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $9.75.";
    else if ((ticketOrBruincard == "BruinCard") && (typeOfMeal == "Lunch") && (studentOrStaff=="Student") && (resident=="Yes"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $11.25.";
    else if ((ticketOrBruincard == "BruinCard") && (typeOfMeal == "Dinner") && (studentOrStaff=="Student") && (resident=="Yes"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $12.25.";
    else if ((ticketOrBruincard == "BruinCard") && (typeOfMeal == "Breakfast") && (studentOrStaff=="Student") && (resident=="No"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $10.00.";
    else if ((ticketOrBruincard == "BruinCard") && (typeOfMeal == "Lunch") && (studentOrStaff=="Student") && (resident=="No"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $11.75.";
    else if ((ticketOrBruincard == "BruinCard") && (typeOfMeal == "Dinner") && (studentOrStaff=="Student") && (resident=="No"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $12.75.";
    else if ((ticketOrBruincard == "BruinCard") && (typeOfMeal == "Breakfast") && (studentOrStaff=="Staff"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $11.25.";
    else if ((ticketOrBruincard == "BruinCard") && (typeOfMeal == "Lunch") && (studentOrStaff=="Staff"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $12.75.";
    else if ((ticketOrBruincard == "BruinCard") && (typeOfMeal == "Dinner") && (studentOrStaff=="Staff"))
        cout << "Thank you for eating at UCLA today.  Your meal cost is $14.75.";
    return 0;
}
