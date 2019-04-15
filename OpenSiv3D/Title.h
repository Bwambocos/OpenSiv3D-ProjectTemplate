// include
#pragma once
#include "Main.h"

// タイトル画面（宣言）
class Title : public MyApp::Scene
{
private:

	// タイトル画面全体で必要な変数などを宣言する（ここで初期化はしない，初期化は Title.cpp 内の Title() で）．
	// 例えば，Texture や Font などを宣言だけしておく．

public:

	Title(const InitData& init);
	void update() override;
	void draw() const override;
};
