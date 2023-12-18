#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    while(true) { // while loop to continue to prompt user for command until EXIT is chosen
        const int size3 = 250; // declare constant size for cstring
        char command[size3];
        const int size2 = 1000; // declare constant size for cstring
        char morseCode[size2];
        const int size = 250; // declare constant size for cstring
        char alphaCharacters[size];
        char letter[1000];
        char character[250];

        cout << "Enter in a command: "; // asks for a command
        cin.getline(command, size3); // reads in the command

        if (strcmp(command, "MORSE") == 0) { // if user enters MORSE
            cout << "Enter in alpha characters to be converted to morse code: "; // ask for alpha characters
            cin.getline(alphaCharacters, size); // use getline to take in cstring
            morseOption(alphaCharacters, strlen(alphaCharacters)); // send to morseOption to convert to morse code
            cout << "!" << endl;
        }
        else if (strcmp(command, "ALPHA") == 0) { // if user enters ALPHA
            cout << "Enter in morse code to be converted to alpha characters: " << endl; // ask for morse code
            cin.getline(morseCode, size2); // use getline to take in a cstring
            int i = 0; // set i = 0

            while (morseCode[i] != '!') { // read through while not reading !
                char sizeArray[5]; // char arrray is equal to 5 because of morse code length
                int g = 0; // set g = 0
                while (morseCode[i] != ' ') { // reads through the cstring until a space
                    sizeArray[g] = morseCode[i];
                    g++; // add g
                    i++; // add i
                }
                i++; // add i regardless
                sizeArray[g] = '\0'; // null character
                cout << alphaOption(sizeArray, g); // print the alpha characters
            }
            cout << "." << endl; // add a period when finished printing
        }
        else if (strcmp(command, "EXIT") == 0) { // if user enters EXIT
            break; // break
        }
        else { // if the user enters another option
            otherOption();
        }
    }
    return 0;
}
