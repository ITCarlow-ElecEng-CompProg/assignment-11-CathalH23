/** Tomorrows Date Calculator
 *  Cathal Hogan
 *  C00184521
 *  27/11/2017
 */

//Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h>
#include <math.h>


using namespace std;

//Declare structure date
struct date
{
    int day ;
    int month ;
    int year ;
};

int main()
{   //Represents the number of days in each month
    int mlength [12] = {31, 28, 31, 30, 30, 30, 31, 31, 30, 31, 30, 31};

    struct date today, tomorrow;

    cout << "Enter Todays Date\n\n" ;
    cout << "Day :\t" ;
    cin >> today.day ;
    cout << "Month :\t" ;
    cin >> today.month;
    cout << "Year :\t" ;
    cin >> today.year;
    //Display the date entered  on above
    cout << "\n\nTodays Date is :\t" << today.day << "/" << today.month << "/" << today.year << endl;

    //If statement to calculate if its an Leap year
    if(today.year % 4 == 0)
    {
        if(today.year % 100 == 0)
        {
            if(today.year % 400 == 0)
            {
                mlength[1] = 29;
            }
        }
        else
        {
            mlength[1] = 29;
        }
    }
    //If statement to add day/month/year
    if(today.day >= mlength[today.month -1])
    {
        if (today.month == 12)
        {
            tomorrow.day = 1;
            tomorrow.month = 1;
            tomorrow.year = today.year + 1;
        }
        else
        {
            tomorrow.day = 1;
            tomorrow.month = today.month + 1;
            tomorrow.year = today.year;
        }
    }
    else
    {
        tomorrow.day = today.day +1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }

    //The day will be displayed on the screen
    cout << "\n\nTomorrows Date is:\t" << tomorrow.day << "/" << tomorrow.month << "/" << tomorrow.year << endl;

    return 0;
}
