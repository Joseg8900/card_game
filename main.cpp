#include <iostream>
#include <string>
#include <format>
#include "card.h"

int main(){
    Card rand = Card("*",8);
    Card band = Card("*",9);
    
    rand.print();
    band.print();

    return 0;
}