#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void getBirthdayCake(string name, int age); 

int main() 
{
    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    fstream inputFile;
    inputFile.open("names.txt", ios::out);

    inputFile << name << endl;
    inputFile << age << endl;

    inputFile.close();

    cout << "Birthday Cake:" << endl;
    getBirthdayCake(name, age);

    return 0;
}

void getBirthdayCake(string name, int age) 
{
    fstream outputFile;
    outputFile.open("birthday_cake.txt", ios::out);

    char border;
    if (age % 2 == 0) 
    {
        border = '#';
    } 
    else 
    {
        border = '*';
    }

    for (int i = 0; i < 15; i++) 
    {
        cout << border;
        outputFile << border;
    }
    cout << endl;
    outputFile << endl;

    cout << border << " " << age << " HB " << name << "! " << age << " " << border << endl;
    outputFile << border << " " << age << " HB " << name << "! " << age << " " << border << endl;

    for (int i = 0; i < 15; i++) 
    {
        cout << border;
        outputFile << border;
    }
    cout << endl;
    outputFile << endl;

    outputFile.close();
}