// include
#pragma once
#include "Main.h"

// ハイスコア一覧（宣言）
class Score : public MyApp::Scene
{
private:

public:
	Score(const InitData& init);
	void update() override;
	void draw() const override;
};
