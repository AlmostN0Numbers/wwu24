/*

#  Name: Reid Morin            

#  Description: Assignment03 

#  Date: 2/9/24              

#  Specification: prompts the user for the quantity of books checked out and the number of days the books are checked out. Compute the rental fee based on a charge of $.25 for each book, plus $.50 per day late fee for every day each book is checked out over 7 days. Output the result.

*/ 
#include <iostream>
using namespace std;
int main() {
    //Constant Declerations
    double totalRentalFee = 0.0;
    //variable declerations
    int quantity;
    int days;
    //input
    cout << "Enter the quantity of books checked out: ";
    cin >> quantity;
    for (int i = 1; i <= quantity; ++i) {
        cout << "Enter the number of days book " << i << " is checked out: ";
        cin >> days;
        //Process
        double bookRentalFee = 0.25 + (days > 7 ? 0.50 * (days - 7) : 0);
        totalRentalFee += bookRentalFee;
    }
    // Output
    cout << "Total rental fee: $" << totalRentalFee << endl;
    return 0;
}