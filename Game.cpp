#include "DxLib.h"
#include "Game.h"
#include "SceneMgr.h"

extern int machine;

int imgloadflag_game = 0;

void GameUpdate()
{

	if (imgloadflag_game == 0) {
		imgloadflag_game = 1;
		LoadImg_Game();
	}

	if (CheckHitKey(KEY_INPUT_N) != 0) {
		ChangeScene(eScene_Result);
		ReleaseImg_Game();
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
	imgloadflag_game = 0;
}