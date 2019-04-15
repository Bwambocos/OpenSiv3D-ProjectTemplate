//	include
#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Main.h"
#include "Title.h"
#include "Game.h"
#include "Result.h"
#include "Score.h"

// メイン関数（プログラムはここから始まる）
void Main()
{
	// ウィンドウのサイズを変更
	Window::Resize(GameInfo::Width, GameInfo::Height);

	// ウィンドウのタイトルを変更
	Window::SetTitle(GameInfo::Title);

	// 背景色を変更
	Graphics::SetBackground(GameInfo::BackgroundColor);

	// 使用するシーンを追加
	// U"なんちゃら" で書いた「なんちゃら」がシーンを識別する名前になる
	MyApp manager;
	manager.setFadeColor(GameInfo::FadeInColor);
	manager.add<Title>(U"Title");
	manager.add<Game>(U"Game");
	manager.add<Result>(U"Result");
	manager.add<Score>(U"Score");

	// メインループで更新と描画をする
	while (System::Update())
	{
		if (!manager.update()) break;
	}
}
