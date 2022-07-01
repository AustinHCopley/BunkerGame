//
// Created by dmedi on 4/29/2020.
//

#include "Player.h"
#include <iostream>
using namespace std;
//generates the users initial health, and sets a new health after damage
Player::Player() {
    health = 1;
}
void Player::sethealth(int damage){
    health -= damage;
}
int Player::gethealth() {
    return health;
}
//inputs a new item into the players inventory, lets the player view their inventory, lets the player use an inventory item
void Player::setinventory(string newitem) {
    inventory.push_back(newitem);
}
void Player::viewinventory() {
    cout << "Inventory: ";
    for (int i = 0; i < inventory.size(); i++){
        cout << inventory.at(i) << " ";
    }
    cout << endl;
}


vector<string> Player::getInventory() {
    return inventory;
}
