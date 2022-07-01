//
// Created by dmedi on 4/29/2020.
//

#include "Room.h"
#include "Player.h"
#include <iostream>
#include <fstream>

using namespace std;

//default constructor for the room
Room::Room(string item, string description, string actions, vector<string> reaction, int &userinput, vector<int> paths, bool useitem, Player player, string item2){
    Room::setroomnum("0");
    Room::description(description);
    Room::actions(actions);
    cin >> userinput;
    if ( cin.fail()) {
        cin.clear();
        cin.ignore();
        userinput = 0;
    }
}
//sets the room number from the main
void Room::setroomnum(string inputroom) {
    roomnum = inputroom;
}
//gets the item in the room
void Room::getitem() {
    ifstream fin;
    filename = roomnum + ".txt";

    fin.open(filename);
    if (fin.fail()){
        cerr << "Could not open \"" << filename << "\"" << endl;
    }
    fin >> item;
}
//Prints the description of the room
void Room::description(string description) {
    cout << description << endl << endl;
}
//Prints the availible actions
void Room::actions(string actions) {
    cout << actions << endl;
    cout << "What do you wish to do?" << endl;
}

