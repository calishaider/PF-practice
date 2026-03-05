#include <iostream>
using namespace std ;

int main ()
{
    /* In a couple of months there is the event of 23 March because of Pakistan day.
    You are wanting to go to see Parade in Islamabad but this place/Park is at an 
    extensive distance so you will check tickets. availability on the web, You are
    required to create a Ticket Booking System of Parade where you will enter the
    hours people will remain there, and the swings children were going to choose.

    Furthermore: The ticket rates for Park

    Children under 10 are not permitted to sit on Park
    10-15(age) wins 10% OFF
    15-20 5% OFF
    "Above 20 are not allowed
    Note: cost of ticket is PKR 10 per hour

    The rates for Park swings

    1-5 (age) wins 50% OFF
    5-10 25% OFF
    Above 10 are not allowed
    Note: cost of ticket is PKR 10

    Program will at that point request to enter age of person and hours will remain in
    the park. The next part of program will find the total bill based on above 
    requirement and display the total bill. */

    int hours, age, prate, srate;
    int pticket = 0, sticket = 0;
    float pdiscount = 0, sdiscount = 0;

    cout << "Enter age: "; cin >> age;

    if (age > 20)
    {
        cout << "\nAbove 20, Both Park and Swing tickets are not allowed\n";
        return 0;
    }

    cout << "Enter hours: "; cin >> hours;

    // Park ticket ----------> 10 pkr per hour 
    bool parkAllowed = false;

    if (age < 10)
    {
        cout << "\nUnder 10, Park ticket not allowed\n";
    }
    else
    {
        parkAllowed = true;

        if (age >= 10 && age <= 15)
            pdiscount = 10/100;//10 per
        if (age > 15 && age <= 20)
            pdiscount = 5/100;// 5 per

        prate = 10 * hours;
        pticket = prate - (prate * pdiscount);
    }

    // Swing ticket ----------> 10 pkr  
    bool swingAllowed = false;

    if (age > 10)
    {
        cout << "\nAbove 10, Swing ticket not allowed\n";
    }
    else
    {
        swingAllowed = true;

        if (age >= 1 && age <= 5)
            sdiscount = 50/100;//50 per
        if (age > 5 && age <= 10)
            sdiscount = 25/100;// 25 per

        srate = 10;
        sticket = srate - (srate * sdiscount);
}

    // Output
    cout << "\n------ PRICE ------\n";

    if (parkAllowed)
        cout << "Park Ticket: " << pticket << " PKR\n";

    if (swingAllowed)
        cout << "Swing Ticket: " << sticket << " PKR\n";




}
