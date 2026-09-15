// importing libraries 

#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

// define a custom player data type 

int max_health = 100;

struct Player {
    char name[50];
    int level;
    int health;
};

int main() {
    // create a player 

    struct Player player1;
    struct Player player2; 

    // adding values for the players 
    player1.level = 2;
    player1.health = 80;

    player2.level = 3;
    player2.health = 70;

    strcpy(player1.name, "Adam");
    strcpy(player2.name, "Becky");

    // print the stats 

    printf("Player 1 Name: %s\n", player1.name);
    printf("Player 2 Name: %s\n", player2.name);

    // leveling up the players 

    while (player1.health < max_health) {
        player1.health += 5;
        printf("Player %s Health: %i\n", player1.name, player1.health);
    }

    while (player2.health < max_health) {
        player2.health += 5;
        printf("Player %s Health: %i\n", player2.name, player2.health);
    }

    return 0;
}