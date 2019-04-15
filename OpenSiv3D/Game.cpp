// include
#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Game.h"

// ゲーム（定義）

// 初期化
Game::Game(const InitData& init) : IScene(init)
{
	// ゲーム画面の更新・描画を始める前に必要な処理を書く．
	// 例えば，画像の読み込み，フォントの作成など．
}

// 更新
void Game::update()
{
	// ゲーム画面の更新処理を書く．
	// 例えば，自機の移動など.
	// 値を変更したりするような処理は draw() ではなくここに書く．
}

// 描画
void Game::draw() const
{
	// ゲーム画面の描画処理を書く．
	// 例えば，画像や文字の描画など．
	// この中では値を変更するような処理は書かない（エラーになる）．
}
