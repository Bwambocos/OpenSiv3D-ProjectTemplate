// include
#pragma once
#include <Siv3D.hpp>
#include <HamFramework.hpp>

// �S�ẴV�[������A�N�Z�X�ł���f�[�^
struct GameData
{

};

using MyApp = SceneManager<String, GameData>;

// ��{���
namespace GameInfo
{
	// �𑜓x
	const int32 Width = 1280;
	const int32 Height = 720;

	// �^�C�g��
	const String Title = U"Test App";

	// �w�i�F
	const ColorF BackgroundColor = ColorF(0.4, 0.7, 0.5);

	// �V�[���؂�ւ����̃t�F�[�h�C���E�A�E�g�̐F
	const ColorF FadeInColor = ColorF(1.0, 1.0, 1.0);
}
