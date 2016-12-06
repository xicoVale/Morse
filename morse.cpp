#include <string>
#include "morse.hpp"

using namespace std;

Converter::Converter(void) {}

// Convert morse code to arabic characters
string Converter::toArabic (string morseText) {
  String output = "";

  for (char c in morseText) {
    int index = morseAlphabet.find(c);

    if (index == morseAlphabet.length - 1) {
      output += " ";
    }
    else{
      output += alphanumeric[index];
    }

  }

  return output;
}

// Convert arabic characters to morse code
string Converter::toMorse (string text) {
  String output = "";

  for (char c in text) {
    int index = alphanumeric.find(c);

    if (index == alphanumeric.length - 1) {
      output += " ";
    }
    else{
      output += str(morseAlphabet[index]);
    }

  }

  return output;
}
