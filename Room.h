//
// Created by dmedi on 4/29/2020.
//

#ifndef FINAL_PROJECT_ROOM_H
#define FINAL_PROJECT_ROOM_H
#include <iostream>
#include <fstream>
#include <vector>
#include "Player.h"

using namespace std;

class Room {
public:
    Room(string item, string description, string actions, vector<string> reaction, int &userinput, vector<int> paths, bool useitem, Player player, string item2);
    void setroomnum(string inputroom);
    void getitem();
    void description(string description);
    void actions(string actions);

private:
    string item, roomnum, filename;
    ifstream fin;
    int userchoice;
    vector<int> paths;
};


#endif //FINAL_PROJECT_ROOM_H
