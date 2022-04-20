#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"

class Person;

class Player {
private:
    Person per;
    bool whiteSide;
public:
    Player(bool whiteSide, Person per);
    Player(Person per, bool whiteSide);
    Player(){};
    
    
    Person getPerson();
    bool isWhiteUser();
};

#endif