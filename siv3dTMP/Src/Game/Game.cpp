#include "Game.hpp"

Game::Game(const InitData& init) : IScene{ init }
{
}

Game::~Game()
{
}

void Game::update()
{
	ClearPrint();
	if (KeySpace.down())
	{
		changeScene(SceneName::Title);
	}
}

void Game::draw() const
{
	Print << U"Gameシーンだよ";
}
