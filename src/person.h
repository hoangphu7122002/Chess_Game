#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    std::string name;
    std::string image_link;
    int elo;
public:
    Person(std::string name, int elo);
    Person(std::string name, int elo, string image_link);
    Person(){
        this->name = "";
        this->elo = -1;
    }
    
    //get method
    string getName();
    int getElo();
    string getImageLink();
    
    //set method
    void setName(string name);
    void setElo(int elo);
    void setImageLink(string image_link);
    
};

#endif