// include
#pragma once
#include "Main.h"

// ���ʉ�ʁi�錾�j
class Result : public MyApp::Scene
{
private:

public:
	Result(const InitData& init);
	void update() override;
	void draw() const override;
};
