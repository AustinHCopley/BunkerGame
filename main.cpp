/* 
 * Author: Austin Copley, Drew Medina
 * 
 * Bunker Horror
 */

#include <iostream>
#include "Player.h"
#include "Room.h"
#include "Setting.h"
#include <vector>

using namespace std;

//Provides a reaction to the players choice
void reactions(vector<string> reactions, int userinput) {
    cout << reactions.at(userinput - 1) << endl;
}

//checks if an item is in the player's inventory
bool checkInventory(Player player, string item) {
    vector<string> inventory = player.getInventory();
    for (int i = 0; i < inventory.size(); i++) {
        if (inventory.at(i) == item) {
            return true;
        }
        return false;
    }
}

int main() {
    int userinput;

    Setting newgame;
//prints the introduction before the game
    newgame.introduction();
//room0 information
    string description0 = "As you look around, there is nothing particularly interesting about this room. \nThe gray concrete walls are starting to show some wear. \nThere is an old rotting door facing you, you feel like you could knock it down if you need to. \nYou can see a small rickety mahogany desk tucked into the corner. \nThere appears to be drawers in the desk.";
    string action0 = "1.Move into the next room\n2.Open the drawer";
    vector <string> reaction0 {"The door is unlocked, you move into the next room.", "The drawer opens with a shudder, there is nothing inside."};
    vector <int> path0 {1};
//room1 information
    string item1 = "Candlestick";
    string description1 = "You enter another concrete room, there is a flickering light hanging from the center of the room.\nThere are two additional doors in this room one is a rusting metal door with a lock, another is a sturdy wood door, with the numbers 316 written on the front. \nIt would appear as though you weren't the only person to be here before. \nThere is a jacket strewn across the floor in a corner.";
    string action1 = "1.Open the rotting wood door\n2.Open the rusty metal door\n3.Open the sturdy wood door with the number 316\n4.Search the jacket";
    vector <string> reaction1 {"The door is unlocked, you move into the next room.", "The door opens with some difficulty, you have to put some effort into it.", "The wood door opens with a creak that makes you jump.", "Inside the pocket of this jacket is a candlestick!"};
    vector <int> path1 {0, 2, 3};
//room2 information
    string item2 = "Bandage";
    string description2 = "The Room is too dark for you to see in.";
    string action2 = "1.Search the room\n2.Use item\n3.Leave";
    vector <string> reaction2 {"You trip in the dark and hit your head on a metallic beam, you die instantly.","You use your candle and light up the room, now you can see. You search the room and find an old metal box with what looks like a red cross on it. The box is locked.", "You exit the room"};
    vector <int> path2 {1};
//room3 information
    string description3 = "This room is different from the others, \nThe walls are now metal, and you can see rust as though water has been leaking from the walls. \nThere are another two doors in this room. \nOne door resembles the one you just used, this time the room number is 224. \nThe other is a metal door that resembles more of a navy hatch.";
    string action3 = "1.Open the sturdy wooden door with 316\n2.Open the wooden door with 224\n3.Open the metal navy door\n4.Use item";
    vector <string> reaction3 {"You open the wooden door, which releases another high pitched squeal.","You open this wooden door with ease.","The metal door opens part way, but gets stuck.","You use a crowbar to pry the metal door open enough for you to get through."};
    vector <int> path3 {1, 4, 8};
//room4 information
    string description4 = "As you enter the room you can smell a strange aroma. \nIt is strong and pungent, you believe it comes from what looks like old moldy carpet. \nThis room was definitely a common area or office at some point. \nIt looks like at some point there was wood paneling along the walls. \nThe also appears to be yet another two doorways. \nOne of the doorways is missing the door, while the other is another sturdy wood door. \nThe door is missing the letters, but it looks like the number 112 was once there.";
    string action4 = "1.Search room\n2.Walk through the doorway\n3.Open the sturdy door with missing numbers\n4.Open the sturdy door with the numbers 224";
    vector <string> reaction4 {"You can’t find anything of significance besides the awful smell","You waltz through the open doorway","Trying to open the door is difficult, but you get it to swing open","You open this wooden door with ease"};
    vector <int> path4 {3, 5, 6};
//room5 information
    string item5 = "Small key";
    string description5 = "This room looks like it used to be a bathroom, but everything has been gutted. \nThe only thing left is a medicine drawer loosely hanging from the wall and the remains of where pipes used to be, \nnow it is all covered with concrete.";
    string action5 = "1.Search the medicine drawer\n2.Search the room\n3.Exit";
    vector <string> reaction5 {"In the medicine drawer you find a small key!","There is nothing else in the room, there are a few old washed up pictures on the floor, you can barely make out the images.","You leave the room."};
    vector <int> path5 {4};
//room6 information
    string item6 = "Crowbar";
    string description6 = "You have to walk down a few steps to enter this room, but similar to all the other rooms there is a lack of anything. \nAs you step into the room you hear and feel the squish of the wet floor. \nApparently this room was flooded and has not been completely drained, the water is a few inches deep. \nIt would explain why there is water damage all around. \nThere is only one door attached to this room other than where you came from, this time the only numbers are 666.";
    string action6 = "1.Search the room\n2.Open the door with the numbers 666\n3.Open the door with missing numbers";
    vector <string> reaction6 {"You can see a metallic object poking through the surface of the murky water. You pull it up and it's a crowbar.","You are able to open the door, but there is a ledge so the water does not escape your current room.","You take a step and walk through the door."};
    vector <int> path6 {4, 7};
//room7 information
    string item7 = "Large key";
    string description7 = "Fortunately this room is not flooded, but it is as barren as the others, with concrete walls and an old bookshelf, it feels nice to dry your feet. \nConveniently, there is a safe in the middle of the room, and it's open too. How lucky!";
    string action7 = "1.Search safe\n2.Leave room";
    vector <string> reaction7 {"You look through the safe and find nothing but a key, hopefully it opens something.","You open the door and walk back through to the flooded room."};
    vector <int> path7 {6};
//room8 information
    string description8 = "This room is the most desolate yet. You are surrounded by concrete, the only feature is a ladder leading up in the middle of the room.";
    string action8 = "1.Climb the ladder\n2.Use item\n3.Leave room";
    vector <string> reaction8 {"You attempt to climb the ladder using your one good hand and find a hatch at the top, but lose your grip and fall to your death.","You wrap your hand in the bandage","You exit the room."};
    vector <int> path8 {2, 3};
//initialize booleans
    bool win = false;
    bool r1 = false, r2 = false, r3 = false, r4 = false, r5 = false, r6 = false, r7 = false, r8 = false;
    bool r0 = true;
    bool candle = false, bandage = false, small = false, crowbar = false, large = false;
    int start = 0;
    Player player;

    //outer game loop
    while (!win) {
        //inner room0 loop
        while (r0) {
            if ( start == 0 ) {
                Room room0("None", description0, action0, reaction0, userinput, path0, false, player, "");
                start++;
            } else {
                Room room0("None", "", action0, reaction0, userinput, path0, false, player, "");
            }
            if (userinput == 1) {
                reactions(reaction0, userinput);
                r1 = true;
                r0 = false;
                cout << endl;
            } else if (userinput == 2) {
                reactions(reaction0, userinput);
            }
        }
        start = 0;
        //inner room1 loop
        while (r1) {
            if ( start == 0 ) {
                Room room1("None", description1, action1, reaction1, userinput, path1, false, player, "");
                start++;
            } else {
                Room room1("None", "", action1, reaction1, userinput, path1, false, player, "");
            }
            if (userinput == 1) {
                reactions(reaction1, userinput);
                r0 = true;
                r1 = false;
                cout << endl;
            } else if (userinput == 2) {
                reactions(reaction1, userinput);
                r2 = true;
                r1 = false;
                cout << endl;
            } else if (userinput == 3) {
                reactions(reaction1, userinput);
                r3 = true;
                r1 = false;
                cout << endl;
            } else if (userinput == 4) {
                if (!candle) {
                    reactions(reaction1, userinput);
                    player.setinventory("Candlestick");
                    player.viewinventory();
                    candle = true;
                } else {
                    cout << "You have already obtained the item here.";
                }
            }
        }
        //inner room2 loop
        start = 0;
        while (r2) {
            if ( start == 0 ) {
                Room room2("None", description2, action2, reaction2, userinput, path2, true, player, "Candlestick");
                start++;
            } else {
                Room room2("None", "", action2, reaction2, userinput, path2, true, player, "Candlestick");
            }
            if (userinput == 1) {
                reactions(reaction2, userinput);
                player.sethealth(1);
                cout << "Game Over";
                return -1;
            } else if (userinput == 2) {
                if ((checkInventory(player, "Candlestick")) || candle) {
                    if ((checkInventory(player, "Small key")) || small) {
                        cout << "You use your candle and light up the room, now you can see. You search the room and find an old metal box with what looks like a red cross on it. You use your Small key to open the box and inside is a bandage." << endl;
                        player.setinventory("Bandage");
                        player.viewinventory();
                        bandage = true;
                    } else {
                        reactions(reaction2, userinput);
                    }
                } else {
                    cout << "You do not have an item that can be used here." << endl;
                }

            } else if (userinput == 3) {
                reactions(reaction2, userinput);
                r1 = true;
                r2 = false;
                cout << endl;
            }
        }
        start = 0;
        //inner room3 loop
        while (r3) {
            if ( start == 0 ) {
                Room room3("None", description3, action3, reaction3, userinput, path3, false, player, "");
                start++;
            } else {
                Room room3("None", "", action3, reaction3, userinput, path3, false, player, "");
            }
            if (userinput == 1) {
                reactions(reaction3, userinput);
                r1 = true;
                r3 = false;
                cout << endl;
            } else if (userinput == 2){
                reactions(reaction3, userinput);
                r4 = true;
                r3 = false;
                cout << endl;
            } else if (userinput == 3){
                reactions(reaction3, userinput);
            } else if (userinput == 4) {
                if ((checkInventory(player, "Crowbar")) || crowbar) {
                    reactions(reaction3, userinput);
                    r8 = true;
                    r3 = false;
                    cout << endl;
                } else {
                    cout << "You do not have an item that can be used here." << endl;
                }
            }
        }
        start = 0;
        //inner room4 loop
        while (r4) {
            if ( start == 0 ) {
                Room room4("None", description4, action4, reaction4, userinput, path4, false, player, "");
                start++;
            } else {
                Room room4("None", "", action4, reaction4, userinput, path4, false, player, "");
            }
            if (userinput == 1) {
                reactions(reaction4, userinput);
            } else if (userinput == 2) {
                reactions(reaction4, userinput);
                r5 = true;
                r4 = false;
                cout << endl;
            } else if (userinput == 3) {
                reactions(reaction4, userinput);
                r6 =  true;
                r4 = false;
                cout << endl;
            } else if (userinput == 4) {
                reactions(reaction4, userinput);
                r3 = true;
                r4 = false;
                cout << endl;
            }
        }
        start = 0;
        //inner room5 loop
        while (r5) {
            if ( start == 0 ) {
                Room room5("None", description5, action5, reaction5, userinput, path5, false, player, "");
                start++;
            } else {
                Room room5("None", "", action5, reaction5, userinput, path5, false, player, "");
            }
            if (userinput == 1) {
                if (!small) {
                    reactions(reaction5, userinput);
                    player.setinventory("Small key");
                    player.viewinventory();
                    small = true;
                } else {
                    cout << "You have already obtained the item here." << endl;
                }
            } else if (userinput == 2) {
                reactions(reaction5, userinput);
            } else if (userinput == 3) {
                reactions(reaction4, userinput);
                r4 = true;
                r5 = false;
                cout << endl;
            }
        }
        start = 0;
        //inner room6 loop
        while (r6) {
            if ( start == 0 ) {
                Room room6("None", description6, action6, reaction6, userinput, path6, false, player, "");
                start++;
            } else {
                Room room6("None", "", action6, reaction6, userinput, path6, false, player, "");
            }
            if (userinput == 1) {
                if (!crowbar) {
                    reactions(reaction6, userinput);
                    player.setinventory("Crowbar");
                    player.viewinventory();
                    crowbar = true;
                } else {
                    cout << "You have already obtained the item here." << endl;
                }
            } else if (userinput == 2) {
                reactions(reaction6, userinput);
                r7 = true;
                r6 = false;
                cout << endl;
            } else if (userinput == 3) {
                reactions(reaction6, userinput);
                r4 = true;
                r6 = false;
                cout << endl;
            }
        }
        start = 0;
        //inner room7 loop
        while (r7) {
            if ( start == 0 ) {
                Room room7("None", description7, action7, reaction7, userinput, path7, false, player, "");
                start++;
            } else {
                Room room7("None", "", action7, reaction7, userinput, path7, false, player, "");
            }
            if (userinput == 1) {
                if (!large) {
                    reactions(reaction7, userinput);
                    player.setinventory("Large key");
                    player.viewinventory();
                    large = true;
                } else {
                    cout << "You have already obtained the item here." << endl;
                }
            } else if (userinput == 2) {
                reactions(reaction7, userinput);
                r6 = true;
                r7 = false;
                cout << endl;
            }
        }
        start = 0;
        //inner room8 loop
        while (r8) {
            if ( start == 0 ) {
                Room room8("None", description8, action8, reaction8, userinput, path8, true, player, "Large key");
                start++;
            } else {
                Room room8("None", "", action8, reaction8, userinput, path8, true, player, "Large key");
            }
            if (userinput == 1) {
                reactions(reaction8, userinput);
                player.sethealth(1);
                cout << "Game Over";
                return -2;
            } else if (userinput == 2) {
                if ((checkInventory(player, "Bandage")) || bandage) {
                    if ((checkInventory(player, "Large key")) || large) {
                        win = true;
                        break;
                    } else {
                        cout << "You climb the ladder and find a hatch at the top, the hatch seems to be locked" << endl;
                    }
                } else {
                    cout << "You do not have an item that can be used here." << endl;
                }
            } else if (userinput == 3) {
                reactions(reaction8, userinput);
                r3 = true;
                r8 = false;
                cout << endl;
            }
        }
        start = 0;

    }
    //prints the conclusion once the game has been won
    newgame.conclusion();

    return 0;
}
