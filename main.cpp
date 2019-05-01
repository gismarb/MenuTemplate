//!
//! @file       main.cpp
//! @author     Hasenfresser
//! @version    1.04
//! @date       2017-12-28
//!
//! @brief      Main file of the project. Just for testing purposes.
//!

#include "MenuTemplate/MenuTemplate.hpp"
#include <iostream>

using std::cout;
using std::endl;

//!
//! @brief  Main function of MenuTemplate.
//!
//! @return int
//!
int main() {
    // Example menu for a game:
    MenuTemplate::MenuTemplate MenuA;

    // Prova P1 (2) - Adicionando novo titulo (Neverwinter Nights Simple Menu)
    MenuA.Title = "\n\t\tNeverwinter Nights Simple Menu";

    MenuA.Description = "Choose with UP and DOWN, select with RETURN!";
    MenuA.setCursor("> ");

    MenuA.addEntry("GAME_NEW", "New game");
    MenuA.addEntry("GAME_LOAD", "Load save state");
    MenuA.addEntry("GAME_EXIT", "Exit game");
    MenuA.addEntry("GAME_OPTIONS", "Game options");
    
    // Prova P1 (1) - Adicionando (Video Options, Sound Options, Controls)
    MenuA.addEntry("GAME_VIDEO", "Video Options");
    MenuA.addEntry("GAME_SOUND", "Sound Options");
    MenuA.addEntry("GAME_CONTROLS", "Controls");


    MenuA.swapEntries(2, "GAME_OPTIONS");

    MenuA.setCursorStartPosition(2);

    cout << MenuA.displayGetName() << endl;
    
    // Prova P1 (3) - Fazendo uso metodo getCursor (mostrando qual foi o cursor utilizado)
    cout << "Cursor typed: " << MenuA.getCursor() << endl;
}
