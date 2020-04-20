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
	//‰æ‘œ•\¦
	DrawGraph(0, 0, machine, TRUE);

	//•¶š—ñ•\¦
	DrawString(0, 0, "ƒQ[ƒ€‰æ–Ê", TRUE);

	
}

void LoadImg_Game()
{

}

void ReleaseImg_Game()
{

}