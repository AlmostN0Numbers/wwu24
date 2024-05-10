/*

#  Name:Reid Morin            

#  Description: Prompt the user for the source string and the character to search for. Output the number to times the search character appears in the source string.

#  Date:3/9/24              

#  Specification:CS140

*/ 
#include <iostream>
#include <string>
using namespace std;
int GetCharacterCount(char c, string str, int size);
int main() {
//variable declerations
    string sentence;
    char searchChar;
    //input
    cout << "Enter a string: ";
    getline(cin, sentence);
    cout << "Enter a character to search for in the string: ";
    cin >> searchChar;
    //process
    int size = sentence.length();
    int count = GetCharacterCount(searchChar, sentence, size);
    //output
    cout << endl << "The character " << searchChar << " is found " << count << " times." << endl;
    int ch = cin.get();
    ch = cin.get();      
    return 0;
}
//function
int GetCharacterCount(char c, string str, int size) {
    //constant declerations
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}