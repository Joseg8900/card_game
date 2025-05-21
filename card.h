#ifndef CARD_H
#define CARD_H
#include <string>


class Card{

    private:
        std::string suite;
        std::string face;
        int val;

    public:
    //Constructors
        Card();
        Card(std::string Suite, int Val);
        Card(std::string Suite, std::string Face, int Val);

    //Getters
        std::string getSuite();
        std::string getFace();
        int getVal();

    //Print
        void print();





};
#endif