// include
#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Result.h"

// 結果画面（定義）

// 初期化
Result::Result(const InitData& init) : IScene(init)
{
	// 結果画面の更新・描画を始める前に必要な処理を書く．
	// 例えば，フォントの作成，スコアの取得など．
}

// 更新
void Result::update()
{
	// 結果画面の更新処理を書く．
	// 例えば，あるキーが押されたらタイトルに戻るなど．
	// 値を変更したりするような処理は draw() ではなくここに書く．
}

// 描画
void Result::draw() const
{
	// 結果画面の描画処理を書く．
	// 例えば，文字の描画など．
	// この中では値を変更するような処理は書かない（エラーになる）．
}
