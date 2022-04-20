#include "person.h"
#include <iostream>

using namespace std;

Person::Person(string name,int elo){
    this->setName(name);
    this->setElo(elo);
    this->setImageLink("default");
}

Person::Person(string name,int elo, string imagelink){
    this->setName(name);
    this->setElo(elo);
    this->setImageLink(imagelink);
}

void Person::setName(string name){
    this->name = name;
}

void Person::setElo(int elo){
    this->elo = elo;
}

void Person::setImageLink(string imagelink){
    this->image_link = imagelink;
}

string Person::getName(){
    return this->name;
}
 
int Person::getElo(){
    return this->elo;
}

string Person::getImageLink(){
    return this->image_link;
}

