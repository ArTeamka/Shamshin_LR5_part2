#ifndef SHAMSHIN_TASK21_H
#define SHAMSHIN_TASK21_H

#include <iostream>
#include <string>
using namespace std;

// Функция проверки ввода символа
bool IsValidChar(char c) {
    return (c >= 32 && c <= 126); // Проверка на печатный символ ASCII
}

// Функция ввода символа
void EnterChar(char& ch, const string& label) {
    string input;
    cout << label << " = ";
    getline(cin, input);
    while (input.length() != 1 || !IsValidChar(input[0])) {
        cout << "Invalid input! " << label << " = ";
        getline(cin, input);
    }
    ch = input[0];
}

// Функция вывода информации о символе
void PrintCharInfo(char ch) {
    cout << "Symbol: " << ch << endl;
    cout << "ASCII code: " << (int)ch << endl;
}

// Функция вычисления суммы кодов
int SumASCII(char ch1, char ch2) {
    return (int)ch1 + (int)ch2;
}

#endif