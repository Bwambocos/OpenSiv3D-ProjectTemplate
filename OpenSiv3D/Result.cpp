// include
#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Result.h"

// ���ʉ�ʁi��`�j

// ������
Result::Result(const InitData& init) : IScene(init)
{
	// ���ʉ�ʂ̍X�V�E�`����n�߂�O�ɕK�v�ȏ����������D
	// �Ⴆ�΁C�t�H���g�̍쐬�C�X�R�A�̎擾�ȂǁD
}

// �X�V
void Result::update()
{
	// ���ʉ�ʂ̍X�V�����������D
	// �Ⴆ�΁C����L�[�������ꂽ��^�C�g���ɖ߂�ȂǁD
	// �l��ύX�����肷��悤�ȏ����� draw() �ł͂Ȃ������ɏ����D
}

// �`��
void Result::draw() const
{
	// ���ʉ�ʂ̕`�揈���������D
	// �Ⴆ�΁C�����̕`��ȂǁD
	// ���̒��ł͒l��ύX����悤�ȏ����͏����Ȃ��i�G���[�ɂȂ�j�D
}
