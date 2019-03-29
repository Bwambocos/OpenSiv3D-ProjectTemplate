//	include
#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Main.h"
#include "Title.h"
#include "Game.h"
#include "Result.h"
#include "Score.h"

// メイン関数
void Main()
{
	Window::Resize(GameInfo::Width, GameInfo::Height);
	Window::SetTitle(GameInfo::Title);
	Graphics::SetBackground(GameInfo::BackgroundColor);

	// 使用するシーン
	MyApp manager;
	manager.setFadeColor(GameInfo::FadeInColor);
	manager.add<Title>(U"Title");
	manager.add<Game>(U"Game");
	manager.add<Result>(U"Result");
	manager.add<Score>(U"Score");

	// メインループ
	while (System::Update())
	{
		if (!manager.update()) break;
	}
}
