#include <iostream>
#include "card.h"
#include <string>

Card::Card(){
    suit = "WILD";
    face = "JOKER";
    val = 0;
}

Card::Card(std::string Suit, int Val){
    suit = Suit;
    val = Val;
}

Card::Card(std::string Suit, std::string Face, int Val){
    suit = Suit;
    face = Face;
    val = Val;
}

std::string Card::getSuit(){return suit;}
int Card::getVal(){return val;}
std::string Card::getFace(){return face;}

void Card::print(){

    std::cout << " _________" << '\n';
    
    if(!getFace().empty()){

        std::cout << "";
        std::cout << "| " << getFace() << "       |" << '\n';

        int index = 0;
        for(int i=0;i<3;i++){
            std::cout << "|   ";
            for(int j=0;j<3;j++){
                std::cout << getSuit();
            }
            std::cout << "   |" << '\n';
        }

        std::cout << "|       " << getFace() << " |" << '\n';
        std::cout << " ---------" << '\n';


    }else{

        std::cout << "| " << getVal() << "       |" << '\n';

        int index = 0;
        for(int i=0;i<3;i++){
            std::cout << "|   ";
            for(int j=0;j<3;j++){
                index++;
                if(getVal()>=index){
                    std::cout << getSuit();
                }else{
                    std::cout << " ";
                }
            }
            std::cout << "   |" << '\n';
        }
        
        std::cout << "|       " << getVal() << " |" << '\n';
        std::cout << " ---------" << '\n';
    }
}