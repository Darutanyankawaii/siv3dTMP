#pragma once
#include "./Basic.hpp"

class Title : public App::Scene
{
private:
public:
	Title(const InitData& init);
	~Title();
	void update() override;
	void draw() const override;
};
