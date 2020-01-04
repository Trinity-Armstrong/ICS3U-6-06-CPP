// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: January 2020
// This function converts a word to hexadecimal numbers


#include <iostream>
#include <string>
#include <list>
#include <map>

std::list<std::string> convert(std::string userWord) {
    // This function converts characters of a word to hexadecimal numbers
    
    // Dictionaries and lists
    std::list<std::string> characters;
    std::map<std::string, std::string> hexadecimal = {
        {"A", "41"},
        {"B", "42"},
        {"C", "43"},
        {"D", "44"},
        {"E", "45"},
        {"F", "46"},
        {"G", "47"},
        {"H", "48"},
        {"I", "49"},
        {"J", "4a"},
        {"K", "4b"},
        {"L", "4c"},
        {"M", "4d"},
        {"N", "4e"},
        {"O", "4f"},
        {"P", "50"},
        {"Q", "51"},
        {"R", "52"},
        {"S", "53"},
        {"T", "54"},
        {"U", "55"},
        {"V", "56"},
        {"W", "57"},
        {"X", "58"},
        {"Y", "59"},
        {"Z", "5a"},
        {"a", "61"},
        {"b", "62"},
        {"c", "63"},
        {"d", "64"},
        {"e", "65"},
        {"f", "66"},
        {"g", "67"},
        {"h", "68"},
        {"i", "69"},
        {"j", "6a"},
        {"k", "6b"},
        {"l", "6c"},
        {"m", "6d"},
        {"n", "6e"},
        {"o", "6f"},
        {"p", "70"},
        {"q", "71"},
        {"r", "72"},
        {"s", "73"},
        {"t", "74"},
        {"u", "75"},
        {"v", "76"},
        {"w", "77"},
        {"x", "78"},
        {"y", "79"},
        {"z", "7a"},
    };

    // Process
    for (int counter = 0; counter < userWord.length(); counter++) {
        std::string userWordCharacter(1, userWord.at(counter));
        if (hexadecimal.count(userWordCharacter) > 0) {
            characters.push_back(hexadecimal[userWordCharacter]);
        } else {
            std::cout << "Error, unable to find latin letter character" \
                      << std::endl;
        }
    }

    // Output
    return characters;
}

int main() {
    // This function outputs user input and the converted hexadecimal number

    // Variables
    std::string word;
    std::list<std::string> hexadecimalWord;

    // Input
    std::cout << "Enter a word here:" << std::endl;
    std::getline(std::cin, word);
    std::cout << "" << std::endl;

    // Process
    hexadecimalWord = convert(word);

    // Output
    for (std::string counter : hexadecimalWord) {
        std::cout << counter << " ";
    }
}
