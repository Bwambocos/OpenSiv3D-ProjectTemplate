// include
#pragma once
#include "Main.h"

// タイトル画面（宣言）
class Title : public MyApp::Scene
{
private:

public:
	Title(const InitData& init);
	void update() override;
	void draw() const override;
};
