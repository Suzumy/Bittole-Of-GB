#include "DxLib.h"
#include "SceneMgr.h"
#include "Title.h"

//画像用変数
int machine, gametitle;

//フラグ
int imgloadflag = 0;

//キー入力時誤動作防止用カウント
int count_title = 0;

void TitleUpdate()
{
	if (imgloadflag == 0) {
		imgloadflag = 1;
		LoadImg_Title();
	}

	count_title++;
	if (count_title >= 60) {
		//次の画面への遷移
		if (CheckHitKey(KEY_INPUT_SPACE) != 0) {
			ChangeScene(eScene_Game);
			ReleaseImg_Title();
		}
	}
}

void TitleDraw()
{
	//画像の表示
	DrawGraph(0, 0, machine, TRUE);
	DrawGraph(200, 100, gametitle, TRUE);

	//文字列の表示
	DrawString(200, 300, "スペースキーでスタート", GetColor(0, 0, 0));

}

void LoadImg_Title()
{
	machine = LoadGraph("img/machine.png");
	gametitle = LoadGraph("img/gametitle.png");
}

void ReleaseImg_Title()
{
	//DeleteGraph(machine);
	DeleteGraph(gametitle);
	imgloadflag = 0;
	count_title = 0;
}