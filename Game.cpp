#include "DxLib.h"
#include "Game.h"
#include "SceneMgr.h"

extern int machine;

void GameUpdate()
{
	if (CheckHitKey(KEY_INPUT_N) != 0) {
		ChangeScene(eScene_Result);
	}
}

void GameDraw()
{
	//�摜�\��
	DrawGraph(0, 0, machine, TRUE);

	//������\��
	DrawString(0, 0, "�Q�[�����", TRUE);

	
}

void LoadImg_Game()
{

}

void ReleaseImg_Game()
{

}