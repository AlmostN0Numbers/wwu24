/*
#  Name:Reid Morin
#  Description:   Lab Assignment 1
#  Date: 1/19/2024             
#  Specification: prompts the user for the length x width of the house  
*/ 
#include <iostream> 
using namespace std;
int main () {
   //asks the user for the length and width of the lot 
   cout << "In meters, Enter the length of the lot: ";
   double length;
   cin >> length; 
   cout << "In meters, Enter the width of the lot: ";
   double width;
   cin >> width; 
   //Calculate the area
   double area = length * width;
   //Calculates the time to mow the area of the lawn
   double mowSpeed = 1.5; // sq meters p/s
   double timeInSec = area / mowSpeed;
   //Calculates seconds to minutes 
   double timeInMin = timeInSec / 60;
   //Output the results to the user
   cout << "Minutes to mow the lawn required" << timeInMin << endl;
   return 0;
}