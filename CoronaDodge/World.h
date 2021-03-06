#pragma once
#include "TextureManager.h"
#include "EntityManager.h"
#include "Player.h"

constexpr float ArenaWidth	= 800.0f;
constexpr float ArenaHeight = 600.0f;

constexpr float ItemSpawnTime = 15.0f;

class World
{
	// play area
	sf::RectangleShape arena;
	//entity manager
	EntityManager* entities;
	Player player;
	sf::RenderWindow* pWnd;
	float spawnVal = 0;
	int covCount = 0;
	float itemSpawnVal = ItemSpawnTime;
public:
	World();
	void setWindow(sf::RenderWindow* pWnd);
	void init();
	void draw();
	void update(sf::Time dt);
	void reset();
	void spawnEntity(sf::Time dt);
	void spawnItem(sf::Time dt);
	//EntityManager& getEntities();
	void updatePlayerPos(sf::Vector2f deltaPos);
	Player& getPlayer();
private:
	void initPlayer();
	void updatePlayer(sf::Time dt);
	void updateEntities(sf::Time dt);
};

