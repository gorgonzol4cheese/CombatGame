#include <SFML/Graphics.hpp>
#include <iostream>

class player1 {
private:

public:

};

int main()
{
    sf::RenderWindow window(sf::VideoMode({1920, 1080}), "CombatGame");
    window.setFramerateLimit(60);

    // GRACZ //===================
    sf::RectangleShape player({60, 60});
    player.setFillColor(sf::Color::Magenta);
    //===========================

    sf::Clock Clock;


    // GAME LOOP //===============
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>()) // sprawdza czy uzytkownik zamknal okno
                window.close();
        }

        window.clear(); // czyszczenie bufora przed nowa klatka
        // OBIEKTY //=============
        window.draw(player);
        //========================
        window.display(); // wyswietlenie tego co zostalo wyrenderowane w klatce
    }