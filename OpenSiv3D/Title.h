// include
#pragma once
#include "Main.h"

// �^�C�g����ʁi�錾�j
class Title : public MyApp::Scene
{
private:

	// �^�C�g����ʑS�̂ŕK�v�ȕϐ��Ȃǂ�錾����i�����ŏ������͂��Ȃ��C�������� Title.cpp ���� Title() �Łj�D
	// �Ⴆ�΁CTexture �� Font �Ȃǂ�錾�������Ă����D

public:

	Title(const InitData& init);
	void update() override;
	void draw() const override;
};
