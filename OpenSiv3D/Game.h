// include
#pragma once
#include "Main.h"

// �Q�[���i�錾�j
class Game : public MyApp::Scene
{
private:

	// �Q�[����ʑS�̂ŕK�v�ȕϐ��Ȃǂ�錾����i�����ŏ������͂��Ȃ��C�������� Game.cpp ���� Game() �Łj�D
	// �Ⴆ�΁CTexture �� Font �Ȃǂ�錾�������Ă����D

public:

	Game(const InitData& init);
	void update() override;
	void draw() const override;
};
