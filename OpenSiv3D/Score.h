// include
#pragma once
#include "Main.h"

// �n�C�X�R�A�ꗗ�i�錾�j
class Score : public MyApp::Scene
{
private:

public:
	Score(const InitData& init);
	void update() override;
	void draw() const override;
};
