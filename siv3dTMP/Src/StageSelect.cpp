#include "StageSelect.hpp"

StageSelect::StageSelect(const InitData& init) : IScene{ init }
{
}

StageSelect::~StageSelect()
{
}

void StageSelect::update()
{
	ClearPrint();
	if (KeySpace.down())
	{
		changeScene(SceneName::Game);
	}
}

void StageSelect::draw() const
{
	Print << U"StageSelectシーンだよ";
}
