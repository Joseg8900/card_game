#include <iostream>
#include "card.h"
#include <string>

Card::Card(){
    suite = "WILD";
    face = "JOKER";
    val = 0;
}

Card::Card(std::string Suit, int Val){
    suite = Suit;
    val = Val;
}

Card::Card(std::string Suit, std::string Face, int Val){
    suite = Suit;
    face = Face;
    val = Val;
}

std::string Card::getSuite(){return suite;}
int Card::getVal(){return val;}
std::string Card::getFace(){return face;}

void Card::print(){
    std::cout << "┌─────────────┐" << '\n';
    if(getFace().empty()){
        std::cout << "";
    }else{
        std::cout << "│ 7           │" << '\n';
        for(int i=0;i>3;i++){
            std::cout << "│ ♦ ♦ ♦       │" << '\n';
        }
        std::cout << "│           7 │" << '\n';
        std::cout << "└─────────────┘" << '\n';
    }
}