// include
#pragma once
#include "Main.h"

// ƒQ[ƒ€iéŒ¾j
class Game : public MyApp::Scene
{
private:

public:
	Game(const InitData& init);
	void update() override;
	void draw() const override;
};
