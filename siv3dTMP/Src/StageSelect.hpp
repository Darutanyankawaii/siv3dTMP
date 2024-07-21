#pragma once
#include "./Basic.hpp"

class StageSelect : public App::Scene
{
private:
public:
	StageSelect(const InitData& init);
	~StageSelect();
	void update() override;
	void draw() const override;
};
