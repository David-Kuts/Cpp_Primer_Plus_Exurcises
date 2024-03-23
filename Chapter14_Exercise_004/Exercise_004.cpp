// Exercise_004.cpp
#include <iostream>
#include "person.h"
#include "gunslinger.h"
#include "poker_player.h"
#include "bad_dude.h"

int main() {
    srand(static_cast<unsigned int>(time(0)));

    Person person("John", "Doe");
    Gunslinger gunslinger("Clint", "Eastwood", 2.5, 5);
    PokerPlayer pokerPlayer("Daniel", "Negreanu");
    BadDude badDude("Jesse", "James", 3.0, 10);

    std::cout << "Person:" << std::endl;
    person.show();

    std::cout << "\nGunslinger:" << std::endl;
    gunslinger.show();
    std::cout << "Draw time: " << gunslinger.draw() << std::endl;

    std::cout << "\nPokerPlayer:" << std::endl;
    pokerPlayer.show();
    std::cout << "Draw card: " << pokerPlayer.draw() << std::endl;

    std::cout << "\nBadDude:" << std::endl;
    badDude.show();
    std::cout << "Gunslinger draw time: " << badDude.gDraw() << std::endl;
    std::cout << "PokerPlayer draw card: " << badDude.cDraw() << std::endl;

    return 0;
}
