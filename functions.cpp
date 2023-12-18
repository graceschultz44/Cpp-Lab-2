//
// Created by casha on 2/13/23.
//
#include "functions.h"

void morseOption(char alphaCharacters[], const int size) {
    for(int i = 0; i < size; i++) { // for loop to read through letters and convert them to morse code
        if(tolower(alphaCharacters[i]) == 'a') {
            cout << ".-";
        }
        else if (tolower(alphaCharacters[i]) == 'b') {
            cout << "-...";
        }
        else if (tolower(alphaCharacters[i]) == 'c') {
            cout << "-.-.";
        }
        else if (tolower(alphaCharacters[i]) == 'd') {
            cout << "-..";
        }
        else if (tolower(alphaCharacters[i]) == 'e') {
            cout << ".";
        }
        else if (tolower(alphaCharacters[i]) == 'f') {
            cout << "..-.";
        }
        else if (tolower(alphaCharacters[i]) == 'g') {
            cout << "--.";
        }
        else if (tolower(alphaCharacters[i]) == 'h') {
            cout << "....";
        }
        else if (tolower(alphaCharacters[i]) == 'i') {
            cout << "..";
        }
        else if (tolower(alphaCharacters[i]) == 'j') {
            cout << ".---";
        }
        else if (tolower(alphaCharacters[i]) == 'k') {
            cout << "-.-";
        }
        else if (tolower(alphaCharacters[i]) == 'l') {
            cout << ".-..";
        }
        else if (tolower(alphaCharacters[i]) == 'm') {
            cout << "--";
        }
        else if (tolower(alphaCharacters[i]) == 'n') {
            cout << "-.";
        }
        else if (tolower(alphaCharacters[i]) == 'o') {
            cout << "---";
        }
        else if (tolower(alphaCharacters[i]) == 'p') {
            cout << ".--.";
        }
        else if (tolower(alphaCharacters[i]) == 'q') {
            cout << "--.-";
        }
        else if (tolower(alphaCharacters[i]) == 'r') {
            cout << ".-.";
        }
        else if (tolower(alphaCharacters[i]) == 's') {
            cout << "...";
        }
        else if (tolower(alphaCharacters[i]) == 't') {
            cout << "-";
        }
        else if (tolower(alphaCharacters[i]) == 'u') {
            cout << "..-";
        }
        else if (tolower(alphaCharacters[i]) == 'v') {
            cout << "...-";
        }
        else if (tolower(alphaCharacters[i]) == 'w') {
            cout << ".--";
        }
        else if (tolower(alphaCharacters[i]) == 'x') {
            cout << "-..-";
        }
        else if (tolower(alphaCharacters[i]) == 'y') {
            cout << "-.--";
        }
        else if (tolower(alphaCharacters[i]) == 'z') {
            cout << "--..";
        }
        else if (alphaCharacters[i] == ' ') { // convert space to /
            cout << "/";
        }
        cout << " "; // add a space at the end to match given format
    }
}
char alphaOption(char morseCode[], const int& size2) { // converts morse code to alpha characters
    if (size2 == 1) { // if the size of the character is 1
        if(strcmp(morseCode, ".") == 0) {
            return 'e';
        }
        else if (strcmp(morseCode, "-") == 0) {
            return 't';
        }
        else if (strcmp(morseCode, "!") == 0) {
            return '.';
        }
        else if (strcmp(morseCode, "/") == 0) {
            return ' ';
        }
    }
    else if (size2 == 2) { // if the size of the character is 2
        if (strcmp(morseCode, ".-") == 0) {
            return 'a';
        }
        else if (strcmp(morseCode, "..") == 0) {
            return 'i';
        }
        else if (strcmp(morseCode, "--") == 0) {
            return 'm';
        }
        else if (strcmp(morseCode, "-.") == 0) {
            return 'n';
        }
    }
    else if (size2 == 3) { // if the size of the character is 3
        if(strcmp(morseCode, "-..") == 0) {
            return 'd';
        }
        else if (strcmp(morseCode, "--.") == 0) {
            return 'g';
        }
        else if (strcmp(morseCode, "-.-") == 0) {
            return 'k';
        }
        else if (strcmp(morseCode, "---") == 0) {
            return 'o';
        }
        else if (strcmp(morseCode, ".-.") == 0) {
            return 'r';
        }
        else if (strcmp(morseCode, "...") == 0) {
            return 's';
        }
        else if (strcmp(morseCode, "..-") == 0) {
            return 'u';
        }
        else if (strcmp(morseCode, ".--") == 0) {
            return 'w';
        }
    }
    else if(size2 == 4) { // if the size of the character is 4
        if (strcmp(morseCode, "-...") == 0) {
            return 'b';
        }
        else if (strcmp(morseCode, "-.-.") == 0){
            return 'c';
        }
        else if (strcmp(morseCode, "..-.") == 0) {
            return 'f';
        }
        else if (strcmp(morseCode, "....") == 0) {
            return 'h';
        }
        else if (strcmp(morseCode, ".---") == 0) {
            return 'j';
        }
        else if (strcmp(morseCode, ".-..") == 0) {
            return 'l';
        }
        else if (strcmp(morseCode, ".--.") == 0) {
            return 'p';
        }
        else if (strcmp(morseCode, "--.-") == 0) {
            return 'q';
        }
        else if (strcmp(morseCode, "...-") == 0) {
            return 'v';
        }
        else if (strcmp(morseCode, "-..-") == 0) {
            return 'x';
        }
        else if (strcmp(morseCode, "-.--") == 0) {
            return 'y';
        }
        else if (strcmp(morseCode, "--..") == 0) {
            return 'z';
        }
    }
}

void otherOption() {
    cout << "You have entered an incorrect command, please try again." << endl;
}

