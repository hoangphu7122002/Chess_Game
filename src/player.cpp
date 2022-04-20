#include "player.h"

Player::Player(bool whiteSide, Person per){
    this->per = per;
    this->whiteSide = whiteSide;
};

Player::Player(Person per, bool whiteSide) {
    this->per = per;
    this->whiteSide = whiteSide;
};

Person Player::getPerson(){
    return this->per;
}

bool Player::isWhiteUser(){
    return this->whiteSide == true; 
}