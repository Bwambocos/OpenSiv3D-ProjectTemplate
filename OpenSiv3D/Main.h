// include
#pragma once
#include <Siv3D.hpp>
#include <HamFramework.hpp>

// 全てのシーンからアクセスできるデータ
struct GameData
{
	// 例えば，ゲーム内で得たスコアは結果画面でも使いたい．
	// こういった場合にここに
	//  int gameScore = 0;
	// などと書いておくことで，ゲーム画面でも結果画面でも使うことが出来る．
	// ここのデータを使うときは
	//  getData().gameScore = 114514;
	// のように使うことが出来る．
};

using MyApp = SceneManager<String, GameData>;

// ゲームの基本情報
namespace GameInfo
{
	// ウィンドウの解像度
	const int32 Width = 1280;
	const int32 Height = 720;

	// ウィンドウのタイトル
	const String Title = U"Test App";

	// 背景色
	const ColorF BackgroundColor = ColorF(0.4, 0.7, 0.5);

	// シーン切り替え時のフェードイン・アウトの色
	const ColorF FadeInColor = ColorF(1.0, 1.0, 1.0);
}
