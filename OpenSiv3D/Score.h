// include
#pragma once
#include "Main.h"

// �n�C�X�R�A�ꗗ�i�錾�j
class Score : public MyApp::Scene
{
private:

	// �X�R�A��ʑS�̂ŕK�v�ȕϐ��Ȃǂ�錾����i�����ŏ������͂��Ȃ��C�������� Score.cpp ���� Score() �Łj�D
	// �Ⴆ�΁CTexture �� Font �Ȃǂ�錾�������Ă����D

public:

	Score(const InitData& init);
	void update() override;
	void draw() const override;
};
