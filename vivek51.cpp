
#include <iostream>
using namespace std;
int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1:
             cout<<"January has 31 day";
             break;
        case 2:
             cout<<"February has 28 day";
             break;
        case 3:
             cout<<"March has 31 day";
             break;
        case 4:
             cout<<"April has 30 day";
             break;
        case 5:
             cout<<"May has 31 day";
             break;
        case 6:
             cout<<"June has 30 day";
             break;
        case 7:
             cout<<"July has 31 day";
             break;
        case 8:
             cout<<"August has 31 day";
             break;
        case 9:
             cout<<"September has 30 day";
             break;
        case 10:
             cout<<"October has 31 day";
            break;
        case 11:
             cout<<"November has 30 day";
             break;
        case 12:
             cout<<"December has 31 day";
             break;

    }

    return 0;
}