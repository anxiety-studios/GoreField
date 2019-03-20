#include <SFML/Graphics.hpp>

int main()
{

sf::RenderWindow window(sf::VideoMode(750, 425), "Can I draw a sprite and move it??");
sf::Texture texture;
if (!texture.loadFromFile("/home/thorn/Desktop/testSprites/CHRIS.png"))
{

}

while (window.isOpen())
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }

    window.clear();
    window.draw(texture);
    window.display();
}

return(0);
}
