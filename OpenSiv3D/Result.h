// include
#pragma once
#include "Main.h"

// 結果画面（宣言）
class Result : public MyApp::Scene
{
private:

	// 結果画面全体で必要な変数などを宣言する（ここで初期化はしない，初期化は Result.cpp 内の Result() で）．
	// 例えば，Texture や Font などを宣言だけしておく．

public:

	Result(const InitData& init);
	void update() override;
	void draw() const override;
};
