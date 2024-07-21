#include "Title.hpp"

Title::Title(const InitData& init) : IScene{ init }
{
}

Title::~Title()
{
}

void Title::update()
{
	ClearPrint();
	if (KeySpace.down())
	{
		changeScene(SceneName::Game);
	}
}

void Title::draw() const
{
	Print << U"Titleシーンだよ";
}
