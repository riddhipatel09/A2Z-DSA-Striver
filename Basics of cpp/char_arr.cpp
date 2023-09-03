#include <iostream>
#include <cstring> // Include <cstring> for string functions
using namespace std;

int main() {

// size of arr >= no. of characters in string + 1
  
    char str[5]; // Declare a character array of size 5

    // Initialize the character array with the string "JOHN"
    str[0] = 'J'; // Assign 'J' to the first element
    str[1] = 'O'; // Assign 'O' to the second element
    str[2] = 'H'; // Assign 'H' to the third element
    str[3] = 'N'; // Assign 'N' to the fourth element

    str[4] = '\0'; // Null-terminate the character array to make it a C-style string

    cout << str << endl; // Print the C-style string "JOHN"

    return 0;
}
