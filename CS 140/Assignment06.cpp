/*

#  Name:Reid Morin            

#  Description: compute the total tulips, the earnings, and the average earnings

#  Date:2/23/24              

#  Specification:CS140

*/ 
#include <iostream>
//function
double ComputeTulipEarnings(int numTulips) {
    if (numTulips > 100) {
        return 0.00;
    } else if (numTulips <= 100) {
        return 5.00;
    } else if (numTulips <= 200) {
        return 5.50;
    } else if (numTulips <= 300) {
        return 5.75;
    } else {
        // Calculate earnings for anything over 300 tulips
        int additionalTulips = numTulips - 300;
        double earnings = 6.00 + (additionalTulips / 100.0) * 6.00;
        return earnings;
    }
}
int main() {
//constant declerations
    int totalTulips = 0;
    double totalEarnings = 0.0;
//variable declerations
    int transactions;
    int numTulips;
//input
    std::cout << "Enter the number of transactions: ";
    std::cin >> transactions;
//process
 for (int i = 1; i <= transactions; ++i) {
        std::cout << "Transaction " << i << ": Enter the number of tulips picked: ";
        std::cin >> numTulips;
        double earnings = ComputeTulipEarnings(numTulips);
        totalTulips += numTulips;
        totalEarnings += earnings;

        std::cout << "Earnings for transaction " << i << ": $" << earnings << std::endl;
    }

//output
   double averageEarnings = (transactions > 0) ? (totalEarnings / transactions) : 0.0;

    std::cout << "\nTotal tulips picked: " << totalTulips << std::endl;
    std::cout << "Total earnings: $" << totalEarnings << std::endl;
    std::cout << "Average earnings per transaction: $" << averageEarnings << std::endl;

    return 0;
}