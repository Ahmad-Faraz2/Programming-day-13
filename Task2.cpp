#include <iostream>
#include <fstream>

using namespace std;

void appendMissingLetters(string str);

int main() 
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    ofstream outputFile;
    outputFile.open("alphabets.txt");

    outputFile << str;

    outputFile.close();

    appendMissingLetters(str);

}

void appendMissingLetters(string str) 
{
    ofstream outputFile;
    outputFile.open("alphabets.txt", ios::app);

    string allLetters = "abcdefghijklmnopqrstuvwxyz";
    string missingLetters = "";

    for (int i = 0; i < 26; i++) 
    {
        bool found = false;
        for (int j = 0; j < str[j] != '\0'; j++) 
        {
            if (allLetters[i] == str[j]) 
            {
                found = true;
                break;
            }
        }
        if (!found) 
        {
            missingLetters += allLetters[i];
        }
    }

    cout << endl;
    cout << missingLetters << endl;

    outputFile << endl;
    outputFile << missingLetters;

    outputFile.close();
}
