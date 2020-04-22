#include "DxLib.h"
#include "Game.h"
#include "SceneMgr.h"

#define move 5		//味方キャラの移動量定数
extern int machine;

int enemy, ally, enemy_bullet, ally_bullet;

int imgloadflag_game = 0;

int count_game = 0;

int ally_x, ally_y;



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

	if (CheckHitKey(KEY_INPUT_RIGHT) != 0) {
		ally_x += move;
	}
	if (CheckHitKey(KEY_INPUT_LEFT) != 0) {
		ally_x -= move;
	}

	
}

void GameDraw()
{
	//画像表示
	DrawGraph(0, 0, machine, TRUE);

	//敵味方と弾の基準位置、開発中はこれは消さない
	DrawGraph(40, 45, enemy, TRUE);
	DrawGraph(ally_x, 485, ally, TRUE);
	DrawGraph(60, 95, enemy_bullet, TRUE);
	DrawGraph(60, 475, ally_bullet,TRUE);
	///基準位置ここまで///


	

	//文字列表示
	//DrawString(0, 0, "ゲーム画面", TRUE);

	
}

void LoadImg_Game()
{
	enemy = LoadGraph("img/enemy.png");
	ally = LoadGraph("img/ally.png");
	ally_bullet = LoadGraph("img/bullet_ally.png");
	enemy_bullet = LoadGraph("img/enemy_bullet.png");
	ally_x = 40;
	ally_y = 0;
}

void ReleaseImg_Game()
{
	DeleteGraph(enemy);
	DeleteGraph(ally);
	DeleteGraph(ally_bullet);
	DeleteGraph(enemy_bullet);
	imgloadflag_game = 0;
	count_game = 0;
}