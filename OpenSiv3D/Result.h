// include
#pragma once
#include "Main.h"

// 結果画面（宣言）
class Result : public MyApp::Scene
{
private:

public:
	Result(const InitData& init);
	void update() override;
	void draw() const override;
};
