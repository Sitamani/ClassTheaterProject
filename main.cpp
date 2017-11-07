#include <iostream>

using namespace std;
/*
 * TODO- Functions!
 */
int totalSales() {
    int allSales;
    int currentSale;
    //function to keep a tally of total seats sold.
    cout >> "Enter number of seats required";
    cin << currentSale;
  allSales += currentSale;
    return allSales;
}

int unsoldCount () {
    int freeSeats;
    totalSeats = 450;
    freeSeats = totalSeats - soldSeats;
    // function to return the amount of unsold/free seats total.
    
    return freeSeats;
}

int ticketPrice () {
    int Price
    cout << "Price of tickets from Row 1-5 is $10 a seat";
    cout <<   "Price of tickets from Row 6-10 is $15 a seat";
    cout <<  "Price of tickets from Row 11- 15 is $20 a seat";
    return Price; 
}

int pickSeat () {
    int userChoice;
    
    cout << seatMap();
    cout << "Enter choice of seats";
    cin << userChoice;
    
    seatMap ();
        
    return userChoice;
}
    
    
    int seatMap () {
        //Create Seat map with available -0s and taken 1s
    }
    


int main() {
    //Constant for your rows and constant for your seats with a 2d array pre-defined.
    const ROWS = 15;
    const SEATS = 30;
    int seatIndex [ROWS][SEATS];
    int usrInput; 
    //TODO write code to recieve user input.
    cout << "Enter number for choice. 1 for number of seats available, 2 for prices of seats, 3 to choose row and seat number"
    switch (usrInput) {
        case 0:
            unsoldCount();
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }
        /*
         * TODO- a switch statement to call the functions depending on user input.
         */
    return 0;
}
