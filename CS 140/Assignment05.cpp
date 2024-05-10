/*

#  Name:Reid Morin            

#  Description: Computes rainfall

#  Date:2/23/24              

#  Specification:CS140

*/ 
#include <iostream>
#include <limits> 
int main() {
    //constant declerations
    double total_rainfall = 0;
    //variable declerations 
    int quantity;
    double rainfall;
    //input
    std::cout << "Enter the quantity of values to be processed: ";
    std::cin >> quantity;
    while (std::cin.fail() || quantity <= 0) {
        std::cin.clear();  
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin >> quantity;
    }
    //process
    double least_rainfall = std::numeric_limits<double>::infinity();
    double most_rainfall = -std::numeric_limits<double>::infinity(); 
    for (int day = 1; day <= quantity; ++day) {
        std::cout << "Enter rainfall for day " << day << " (in millimeters): ";
        std::cin >> rainfall;
        while (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid number: ";
            std::cin >> rainfall;
        }
        total_rainfall += rainfall;
        if (rainfall < least_rainfall) {
            least_rainfall = rainfall;
        }
        if (rainfall > most_rainfall) {
            most_rainfall = rainfall;
        }
    }
    double average_rainfall = total_rainfall / quantity;
    //output
    std::cout << "\nRainfall Analysis:" << std::endl;
    std::cout << "Least Rainfall: " << least_rainfall << " mm" << std::endl;
    std::cout << "Most Rainfall: " << most_rainfall << " mm" << std::endl;
    std::cout << "Total Rainfall: " << total_rainfall << " mm" << std::endl;
    std::cout << "Average Rainfall: " << average_rainfall << " mm per day" << std::endl;
    return 0;
}