// include
#pragma once
#include "Main.h"

// �^�C�g����ʁi�錾�j
class Title : public MyApp::Scene
{
private:

public:
	Title(const InitData& init);
	void update() override;
	void draw() const override;
};
