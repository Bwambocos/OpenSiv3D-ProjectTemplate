// include
#pragma once
#include "Main.h"

// ゲーム（宣言）
class Game : public MyApp::Scene
{
private:

	// ゲーム画面全体で必要な変数などを宣言する（ここで初期化はしない，初期化は Game.cpp 内の Game() で）．
	// 例えば，Texture や Font などを宣言だけしておく．

public:

	Game(const InitData& init);
	void update() override;
	void draw() const override;
};
