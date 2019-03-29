// include
#pragma once
#include <Siv3D.hpp>
#include <HamFramework.hpp>

// 全てのシーンからアクセスできるデータ
struct GameData
{

};

using MyApp = SceneManager<String, GameData>;

// 基本情報
namespace GameInfo
{
	// 解像度
	const int32 Width = 1280;
	const int32 Height = 720;

	// タイトル
	const String Title = U"Test App";

	// 背景色
	const ColorF BackgroundColor = ColorF(0.4, 0.7, 0.5);

	// シーン切り替え時のフェードイン・アウトの色
	const ColorF FadeInColor = ColorF(1.0, 1.0, 1.0);
}
