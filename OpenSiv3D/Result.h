// include
#pragma once
#include "Main.h"

// ���ʉ�ʁi�錾�j
class Result : public MyApp::Scene
{
private:

	// ���ʉ�ʑS�̂ŕK�v�ȕϐ��Ȃǂ�錾����i�����ŏ������͂��Ȃ��C�������� Result.cpp ���� Result() �Łj�D
	// �Ⴆ�΁CTexture �� Font �Ȃǂ�錾�������Ă����D

public:

	Result(const InitData& init);
	void update() override;
	void draw() const override;
};
