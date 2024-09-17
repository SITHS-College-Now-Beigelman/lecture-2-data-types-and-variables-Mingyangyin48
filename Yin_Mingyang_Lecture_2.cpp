// Mingyang Michelle Yin
// Lecture 2
// Sept 16, 2024

#include <iostream>
#include <string>
using namespace std;

int main() { 
    // setting values 

    int newNum = 10; // setting a value for a whole number
    float newFlo = 20.11; // setting a value for a floating point number 
    double douNum  = 120.11; // setting a value for a larger floating point number 
    char newCha = '!'; // setting a variable for a charater
    bool newBo = true; // setting a true or false for boolean
    string newStr = "yello"; // setting a word for the string

    // print values 
    
    cout << "int: " << newNum << endl; // printing value for a whole number 
    cout << "float: " << newFlo << endl; // printing value for a floating point number
    cout << "double: " << douNum << endl; // printing value for a larger floating point number 
    cout << "char: " << newCha << endl; // printing value for charater
    cout << "bool: " << newBo << endl; // printing value for boolean
    cout << "string: " << newStr << endl; // printing value for string

    // slide 37 

    int inches = 100; // setting a value for inches
    
    cout << inches << " inch(es) = "; // printing the words inch(es) =
    cout << inches / 12 << " feet (foot) and "; // finding the amount of feets
    cout << inches % 12 << " inch(es) " << endl; // finding the amount of the remainder of inches

    // Compare 2 charaters 

    char chaA = '*'; // first charater 
    char chaB = '@'; // second charater
    
    cout << "Is * < @ = " << (chaA<chaB) << endl; // printing if * is less than @; and seeing if it was true or false

    // equation 

    cout << "2 + 3.5 = " << 2 + 3.5 << endl; // solving 2+3.5
    cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 << endl; // solving 6 / 4 + 3.9
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << endl; // 5.4 * 2 - (13.6 + 18 / 2)



    return 0;
}

    /* 
    OUTPUT  

    int: 10
    float: 20.11
    double: 120.11
    char: !
    bool: 1
    string: yello
    100 inch(es) = 8 feet (foot) and 4 inch(es)
    Is * < @ = 1
    2 + 3.5 = 5.5
    6 / 4 + 3.9 = 4.9
    5.4 * 2 - (13.6 + 18 / 2) = -11.8

     */