//
// Created by dmedi on 4/29/2020.
//

#ifndef FINAL_PROJECT_PLAYER_H
#define FINAL_PROJECT_PLAYER_H
#include <iostream>
#include <vector>
using namespace std;


class Player {
public:
    Player();
    void sethealth(int damage);
    int gethealth();

    void setinventory(string newitem);
    void viewinventory();
    vector<string> getInventory();

private:
    vector <string> inventory;
    int health;
    string itemname;
};


#endif //FINAL_PROJECT_PLAYER_H
