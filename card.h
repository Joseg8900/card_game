#ifndef CARD_H
#define CARD_H
#include <string>


class Card{

    private:
        std::string suit;
        std::string face;
        int val;

    public:
    //Constructors
        Card();
        Card(std::string Suit, int Val);
        Card(std::string Suit, std::string Face, int Val);

    //Getters
        std::string getSuit();
        std::string getFace();
        int getVal();

    //Print
        void print();





};
#endif