#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{

	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
	sf::Texture texture;
	if (!texture.loadFromFile("res/img/zombie.png"))
	{

		std::cout << "load failed" << std::endl;
		system("pause");
	}
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(960, 0, 294, 318));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(sprite);
		window.display();
	}

	return 0;
}