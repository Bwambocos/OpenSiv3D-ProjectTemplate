// include
#pragma once
#include "Main.h"

// �Q�[���i�錾�j
class Game : public MyApp::Scene
{
private:

public:
	Game(const InitData& init);
	void update() override;
	void draw() const override;
};
