/**
File: Main
Description: This program will count the number of times a character appears in a string and print the result.
Author: Jessica Priester
Email: jessicp0249@student.vvc.edu
Date created: 10/16/2018
*/

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int char_count(string s, char a);

int main()
{
    string s;   // string to search
    char a;     // character to find in string
    int count = 0;  // Number of times character appears in string
    
    cout << "What word or phrase would you like to search?" << endl;    // Prompt for string
    getline(cin, s);   // User enters string

    cout << "What letter would you like to find?" << endl;    // Prompt for character
    cin >> a;   // User enters character

    cout << "There are " << char_count(s, a) << " " << a << "'s in " << s << endl;
    // Print number of times character appears in string

    return 0;
}


int char_count(string s, char a)
{
    /**
        Function will count the number of times a character appears in a string and return the result.
        @param s String to be tested
        @param a Character to be counted
        @return Number of times character appears in string
    */

    int count = 0;    // number of times character appears
    int length = s.length();    // length of string

    for(int i = 0; i < length; i++)    // while there are characters left to check in the string...
    {
        if( tolower( s.at(i) ) == a )    // check whether lowercase version of character at position i equals char a
        count++;    // increment for every match found
    }

    return count;
}
