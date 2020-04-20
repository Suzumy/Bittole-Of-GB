#include "DxLib.h"
#include "Game.h"
#include "SceneMgr.h"

extern int machine;

int imgloadflag_game = 0;

int count_game = 0;

void GameUpdate()
{

	if (imgloadflag_game == 0) {
		imgloadflag_game = 1;
		LoadImg_Game();
	}

	count_game++;
	if (count_game >= 60) {
		if (CheckHitKey(KEY_INPUT_N) != 0) {
			ChangeScene(eScene_Result);
			ReleaseImg_Game();
		}
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
	imgloadflag_game = 0;
	count_game = 0;
}