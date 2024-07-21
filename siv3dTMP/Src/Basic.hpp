#pragma once
# include <Siv3D.hpp> // Siv3D v0.6.14

//#define DEBUGGING

static constexpr int SCENE_WIDTH = 720;
static constexpr int SCENE_HEIGHT = 480;

enum class SceneName {
	Title,
	StageSelect,
	Game
};

struct StageData
{
	int currentStageID;//ステージを選択する上でのパス、文字列でも可能
};

using App = SceneManager<SceneName, StageData>;
