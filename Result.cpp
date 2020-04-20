#include "DxLib.h"
#include "Result.h"
#include "SceneMgr.h"

extern int machine;

//画像用変数
int result, kill, bonus, sumpoint;

//フラグ
int imgloadflag_result = 0;

int count_result = 0;

void ResultUpdate()
{
	if (imgloadflag_result == 0) {
		imgloadflag_result = 1;
		LoadImg_Result();
	}

	count_result++;
	if (count_result >= 60) {
		if (CheckHitKey(KEY_INPUT_SPACE) != 0) {
			ChangeScene(eScene_Title);
			ReleaseImg_Result();
		}
	}
	
}

void ResultDraw()
{
	//画像表示
	DrawGraph(0, 0, machine, TRUE);
	DrawGraph(200, 100, result, TRUE);
	DrawGraph(100, 200, kill, TRUE);
	DrawGraph(100, 250, bonus, TRUE);
	DrawGraph(100, 300, sumpoint, TRUE);

	//文字列表示
	DrawString(200, 400, "スペースキーでタイトルへ", TRUE);
}

void LoadImg_Result()
{
	result = LoadGraph("img/Result.png");
	kill = LoadGraph("img/kill.png");
	bonus = LoadGraph("img/bonus.png");
	sumpoint = LoadGraph("img/sumpoint.png");
}

void ReleaseImg_Result()
{
	DeleteGraph(result);
	DeleteGraph(kill);
	DeleteGraph(bonus);
	DeleteGraph(sumpoint);
	imgloadflag_result = 0;
	count_result = 0;
}