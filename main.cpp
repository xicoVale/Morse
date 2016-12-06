#include <iostream>
#include <string>
#include "morse.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    Converter converter;

    string text = "Hello World";
    cout << text << endl;

    string toMorse = converter.toMorse(text);
    cout << toMorse << endl;
    /*
    string toText = converter.toArabic(toMorse);
    printf("%s\n", toText);
    */
}
