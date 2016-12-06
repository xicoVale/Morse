#include <string>
#include <algorithm>
#include "morse.hpp"

using namespace std;

Converter::Converter(void) {}

// Convert morse code to arabic characters
/*string Converter::toArabic(string morseText){
  string output = "";

  for (char c : morseText) {
    int index = find(morseAlphabet, morseAlphabet + (sizeof(morseAlphabet)/sizeof(string)), c);

    if (index == (sizeof(morseAlphabet)/sizeof(string)) - 1) {
      output += " ";
    }
    else{
      output += alphanumeric[index];
    }
  }
  return output;
}
*/
// Convert arabic characters to morse code
string Converter::toMorse (string text) {
  string output = "";

  for (char& c : text) {
    c = (char)(toupper(c));
    int index = alphanumeric.find(c);

    if (index == alphanumeric.length() - 1) {
      output.append(" / ");
    }
    else{
      output.append(morseAlphabet[index].append(" "));
    }
  }
  return output;
}
