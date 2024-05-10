/*

#  Name:Reid Morin            

#  Description: program that prompts the user for the number of books read  

#  Date:2/16/24              

#  Specification:CS140

*/ 
#include <iostream>

int main() {
    //Constant Declerations
    int totalPoints = 0;
    //Variable Declerations
    int numBooks;
    //Input
    std::cout << "Enter the number of books read: ";
    std::cin >> numBooks;
    //Process
    if (numBooks >= 1) {
        totalPoints += 5;
    }
    if (numBooks >= 2) {
        totalPoints += 5; 
    }
    if (numBooks >= 3) {
        totalPoints += 10 * (numBooks - 2);
    }
    if (numBooks > 4) {
        totalPoints += 15 * (numBooks - 4); 
    }
    //Output 
    std::cout << "Total points: " << totalPoints << std::endl;
    return 0;
}