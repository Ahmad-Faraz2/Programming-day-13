#include <iostream>

using namespace std;

void morseCode(char ch) 
{
    string morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    if (ch >= 'A' && ch <= 'Z') 
    {
        cout << morse[ch - 'A'] << " ";
    } 
    else if (ch >= 'a' && ch <= 'z') 
    {
        cout << morse[ch - 'a'] << " ";
    } 
    else if (ch == ' ') 
    {
        cout << "-.-.-.- ";
    }
}

void morse(string str) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        morseCode(str[i]);
    }
    cout << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    morse(str);

    return 0;
}
