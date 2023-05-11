#include <iostream>
#include<ctime>

using namespace std;


int main(int argc, char const *argv[])
{
    time_t now = time(0);
       tm *ltm = localtime(&now);

   // print various components of tm structure.
//    cout << "Year:" << 1900 + ltm->tm_year<<endl;
//    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
//    cout << "Day: "<< ltm->tm_mday << endl;
//    cout << "Time: "<< ltm->tm_hour << ":";
//    cout << ltm->tm_min << ":";
//    cout << ltm->tm_sec << endl;

   
//For 12 July
    int cyear = 1900+ltm->tm_year;
    
    int year;
    int ly;
    cin >> year;

    int date;
    if (cyear<year)
    {
        date = year - cyear;
        date++;
        ly = year/4;
        
        ly = ly - 506;
        
        if (ly <0)
        {
            ly = 0;
        }
        else {
            ly++;
        }
        
        date = date + ly;
        
        
        if (date > 7)
    {
        date = date % 7;
        if (date ==0)
        {
            date = 7;
        }
        
        //cout<<date;  
    }
    switch (date)
    {
    case 1:
        cout << "Friday";
        break;

    case 2:
        cout << "Saturday";
        break;
    case 3:
        cout << "Sunday";
        break;
    case 4:
        cout << "Monday";
        break;
    case 5:
        cout << "Tuesday";
        break;
    case 6:
        cout << "Wednesday";
        break;
    case 7:
        cout << "Thursday";
        break;
    }

    }
    else {
        
        date = cyear- year;
        date;
        ly = year /4;
        ly = 506 - ly;
        cout<<ly<<endl;
        if (ly < 0)
        {
            ly = 0;
        }
        else {
            ly;
        }
        date = date - ly;
        if (date > 7)
        {
            date = date % 7;
            
        }
        date = 7 -date;
        if (date ==0)
            {
                date = 7;
            }
            
        
        
    switch(date)
    {
    case 1:
        cout << "Friday";
        break;

    case 2:
        cout << "Saturday";
        break;
    case 3:
        cout << "Sunday";
        break;
    case 4:
        cout << "Monday";
        break;
    case 5:
        cout << "Tuesday";
        break;
    case 6:
        cout << "Wednesday";
        break;
    case 7:
        cout << "Thursday";
        break;
    }

    }
    
    

    
    
    
    return 0;
}
