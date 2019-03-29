// include
#pragma once
#include "Main.h"

// Œ‹‰Ê‰æ–ÊiéŒ¾j
class Result : public MyApp::Scene
{
private:

public:
	Result(const InitData& init);
	void update() override;
	void draw() const override;
};
