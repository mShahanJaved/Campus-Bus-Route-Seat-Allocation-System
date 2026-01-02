#include <iostream>
using namespace std;

int main()
{
    int choice;

        do 
        {
            cout << "--------------------------------------------" << endl;
            cout << "--------------------------------------------" << endl;
            cout << "  Bus Route & Seat Allocation System" << endl;
            cout << "--------------------------------------------" << endl;
            cout << "--------------------------------------------" << endl;
            cout << endl;
            cout << "1) Initialize / Reset Routes & Buses" << endl;
            cout << "2) Add / Replace Route Records" << endl;
            cout << "3) Add / Replace Bus Records" << endl;
            cout << "4) Display Routes & Bus Seat Status" << endl;
            cout << "5) Allocate Seat to Student (Transport Registration)" << endl;
            cout << "6) Update Student Alocation Record" << endl;
            cout << "7) Cancel Seat Allocation" << endl;
            cout << "8) Search / Listings" << endl;
            cout << "9) Display Bus Seat Occupancy View" << endl;
            cout << "10) Validate Records & Detect Conflicts" << endl;
            cout << "11) Generate reports / Summaries" << endl;
            cout << "0) Exit" << endl;
            cout << "-----------------------------------" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
            {

            }
            break;
            case 2:
            {

            }
            break;
            case 3:
            {

            }
            break;
            case 4:
            {

            }
            break;
            case 5:
            {

            }
            break;
            case 6:
            {

            }
            break;
            case 7:
            {

            }
            break;
            case 8:
            {

            }
            break;
            case 9:
            {

            }
            break;
            case 10:
            {

            }
            break;
            case 11:
            {

            }
            break;
            case 0:
            {

            }
            break;
            default:
            cout << "Invalid Choice. Try Again." << endl;
            }
        } while (choice != 0);
    

    return 0;
}
