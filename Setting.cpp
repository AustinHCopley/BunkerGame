//
// Created by dmedi on 4/29/2020.
//

#include "Setting.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void Setting::introduction() {
    ifstream fin;
    fin.open("intro.txt");
    if (fin.fail()){
        cerr << "Could not open \"intro.txt\"" << endl;
    }

    vector<string> allWords;
    string words;

    while (!fin.fail()){
        fin >> words;
        allWords.push_back(words);
    }
    allWords.pop_back();

    for (int i = 0; i < allWords.size(); i++){
        if (allWords.at(i) == "this" || allWords.at(i) == "," || allWords.at(i) == "across" || allWords.at(i) == "As"){
            cout << endl;
        }
        cout << allWords.at(i) << " ";
        if (allWords.at(i) == "pain.") {
            cout << endl;
        }
    }
    cout << endl << endl;
}

void Setting::conclusion() {
    ifstream fin;
    fin.open("conclusion.txt");
    if (fin.fail()){
        cerr << "Could not open \"conclusion.txt\"" << endl;
    }

    vector<string> allWords;
    string words;

    while (!fin.fail()){
        fin >> words;
        allWords.push_back(words);
    }
    allWords.pop_back();

    for (int i = 0; i < allWords.size(); i++){
        cout << allWords.at(i) << " ";
        if (allWords.at(i) == "cut." || allWords.at(i) == "hatch." || allWords.at(i) == "through." || allWords.at(i) == "surface..." || allWords.at(i) == "nothingness." || allWords.at(i) == "see." || allWords.at(i) == "mistake." ) {
            cout << endl;
        }
    }
    cout << endl << endl;
}