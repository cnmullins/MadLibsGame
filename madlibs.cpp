//Authors: Christian Mullins
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string verb = "";
    string nounOne = "";
    string place = "";
    string nounTwo = "";
    string verbViolent = "";
    string bodyPart = "";
    int wholeNumber = 0;

    cout << "Enter a verb: ";
    cin >> verb;
    cout << "Enter a noun: ";
    cin >> nounOne;
    cout << "Enter a place: ";
    cin >> place;
    cout << "Enter another noun: ";
    cin >> nounTwo;
    cout << "Enter a verb (preferably violent): ";
    cin >> verbViolent;
    cout << "Enter a body part: ";
    cin >> bodyPart;
    cout << "Enter a whole number: ";
    cin >> wholeNumber;

    cout << "Once upon a time a " << verb << " "  << nounOne << " went wandering \n"
            "through the " << place << ". There they met an old " << nounTwo << ".\n"
            "The " << nounTwo << " attacked them and " << verbViolent << "\n"
            "their " << bodyPart << ". They died in " << wholeNumber << " seconds. \n";

  return 0;
}
