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
	//画像表示
	DrawGraph(0, 0, machine, TRUE);

	//文字列表示
	DrawString(0, 0, "ゲーム画面", TRUE);

	
}

void LoadImg_Game()
{

}

void ReleaseImg_Game()
{

}