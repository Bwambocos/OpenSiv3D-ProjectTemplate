// include
#pragma once
#include "Main.h"

// ハイスコア一覧（宣言）
class Score : public MyApp::Scene
{
private:

	// スコア画面全体で必要な変数などを宣言する（ここで初期化はしない，初期化は Score.cpp 内の Score() で）．
	// 例えば，Texture や Font などを宣言だけしておく．

public:

	Score(const InitData& init);
	void update() override;
	void draw() const override;
};
