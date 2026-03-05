# include <iostream>
using namespace std ;

int main ()
{

    // // input hours and minutes and output will be good morning (5-11 59) good afternoon (12 to 16 59)
    // // good evening (17 to 20 59) and good night (21 to 4 59)  you cant use && or || operator


    int hours , seconds ;

    cout << "Enter hours : ";
    cin >> hours ;

    if ( hours >= 24 )  // prerequisit if user input wrong time
    {
        cout << "Invalid hours\n(Atfer 23:59, 00:00 comes not 24:00)" << endl;
    } 

    cout << "Enter seconds : ";
    cin >> seconds ;

    if (seconds >= 60 )  // prerequisit if user input wrong time
    {
        cout << "Invalid seconds\n(After 59 comes 00 not 60)" << endl ;

    }

    if ( hours >= 5 )
    {
        if ( hours < 12 ) // because we cant use && operator other wise statment will be if ( hours >= 5 && hours < 12 )
        {
            cout << "Good morning" ;
        }

    }
    if ( hours >= 12 )   // first i have used else if in this and evening case and wondering why error, because else 
                             // if work only when upper if statement is false, as if condition is hours is greater than 5 
                             // so when i put hour greater than 5 like 14 which is considered in evening it enters in
                             // first if statment as we also cant use && operator to prevent entering so when program enter if
                             // and get wrong by second if he will not go to else if as it work only if if statment is false
    {
        if (hours < 17 )
        {
            cout << "Good afternoon" ;
        }
    }

        if ( hours >= 17 )
        {  
           if (hours < 21 )
           {
              cout << "Good evening" ;
           }
        }

        if (hours >= 21)
        {
           cout << "Good night";
        }
        else
        {
            if (hours < 5)
        {
            cout << "Good night";
        }
        }
}