#include <iostream>
#include <typeinfo>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::ws;

int main()
{
    string textToScan;
    string wordToScanFor;
    string word = "";
    char whitespace = 32;
    int howManyTimes = 0;
    cout << "enter your text: ";
    getline(cin >> ws, textToScan);


    cout << "Enter a word to see how often that word appears in your text! ";
    cin >> wordToScanFor;

    int n =  textToScan.size();

    for (int i = 0; i < n; i++){
        word += textToScan[i];
        if (word == wordToScanFor){
            howManyTimes += 1;
        }
        if (textToScan[i] == whitespace || i == (n-1)){
            word = "";
        }
    }
    cout << "The word: \"" << wordToScanFor<< "\" appears " << howManyTimes << " times in your text";

    return 0;
}
