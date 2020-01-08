#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{

	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
	sf::Texture textures;
	if (!textures.loadFromFile("res/img/zombie.png"))
	{
		std::cout << "load failed" << std::endl;
		system("pause");
	}
	sf::Sprite sprites;
	sprites.setTexture(textures);
	sprites.setTextureRect(sf::IntRect(-109, 0, 2560, 1440));
	sprites.scale(sf::Vector2f(0.75f, 0.75f));
	
	sf::Texture textures1;
	if (!textures1.loadFromFile("res/img/zombie1.png"))
	{
		std::cout << "load failed" << std::endl;
		system("pause");
	}
	sf::Sprite sprites1;
	sprites1.setTexture(textures1);
	sprites1.setTextureRect(sf::IntRect(-659, 0, 2560, 1440));
	sprites1.scale(sf::Vector2f(0.75f, 0.75f));

	sf::Texture textures2;
	if (!textures2.loadFromFile("res/img/zombie2.png"))
	{
		std::cout << "load failed" << std::endl;
		system("pause");
	}
	sf::Sprite sprites2;
	sprites2.setTexture(textures2);
	sprites2.setTextureRect(sf::IntRect(-1171, 0, 2560, 1440));
	sprites2.scale(sf::Vector2f(0.75f, 0.75f));

	sf::Texture textures3;
	if (!textures3.loadFromFile("res/img/zombie3.png"))
	{
		std::cout << "load failed" << std::endl;
		system("pause");
	}
	sf::Sprite sprites3;
	sprites3.setTexture(textures3);
	sprites3.setTextureRect(sf::IntRect(-1683, 0, 2560, 1440));
	sprites3.scale(sf::Vector2f(0.75f, 0.75f));

	sf::Texture textures4;
	if (!textures4.loadFromFile("res/img/zombie4.png"))
	{
		std::cout << "load failed" << std::endl;
		system("pause");
	}
	sf::Sprite sprites4;
	sprites4.setTexture(textures4);
	sprites4.setTextureRect(sf::IntRect(-2195, 0, 2560, 1440));
	sprites4.scale(sf::Vector2f(0.75f, 0.75f));

	sf::Texture textures5;
	if (!textures5.loadFromFile("res/img/player.png"))
	{
		std::cout << "load failed" << std::endl;
		system("pause");
	}
	sf::Sprite sprites5;
	sprites5.setTexture(textures5);
	sprites5.setTextureRect(sf::IntRect(-1176.5, -1127, 2560, 1440));
	sprites5.scale(sf::Vector2f(0.75f, 0.75f));
	
	sf::Texture texture;
	if (!texture.loadFromFile("res/img/grass.png"))
	{
		std::cout << "load failed" << std::endl;
		system("pause");
	}
	texture.setRepeated(true);
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(0, 0, 1920, 1080));
	
	
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
		window.draw(sprites);
		window.draw(sprites1);
		window.draw(sprites2);
		window.draw(sprites3);
		window.draw(sprites4);
		window.draw(sprites5);
		window.display();
	}

	return 0;
}