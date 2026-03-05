#include <iostream>
using namespace std;

int main ()
{
    /*  Make real world bill calculator 
    Input units consumed.
    0–100 units → Rs. 10/unit
    101–200 → Rs. 15/unit
    201–300 → Rs. 20/unit
    300 → Rs. 25/unit
    Then: 
    if someone’s bill is Rs 12,000:
    First 5000 → 0%
    Next 5000 → 10% of 5000 = 500
    Remaining 2000 → 15% of 2000 = 300
    Total tax = 800 */
   
    long int units , rate;
    double tax = 0 , bill ,total;
    cout << endl << endl << "Enter your units consumed : ";
    cin >> units;

     if (units < 0)
    {
        cout << "Invalid input.";
        return 0;
    }
    else if (units <= 100)
        rate = 10; // 10 rs per unit
    else if (units <= 200)
        rate = 15; // 15 rs per unit
    else if (units <= 300)
        rate = 20; // 20 rs per unit
    else
        rate = 25; // 25 rs per unit

    bill = rate * units;

    if (bill > 10000) // 15% tax
    {
        tax = (0.10 * 5000) + (0.15 * (bill - 10000));
    } 
    else if (bill > 5000) // 10% tax
    {
        tax = 0.10 * (bill - 5000);
    }

    total = bill + tax;

    cout << "\nRate per Unit  : " << rate << " Rs";
    cout << "\nBase Bill      : " << bill << " Rs";
    cout << "\nTax Applied    : " << tax << " Rs";
    cout << "\nTotal Bill     : " << total << " Rs";
}
