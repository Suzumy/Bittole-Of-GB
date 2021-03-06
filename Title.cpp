#include "DxLib.h"
#include "SceneMgr.h"
#include "Title.h"

//画像用変数
int machine;

//フラグ
int imgloadflag = 0;

void TitleUpdate()
{
	if (imgloadflag == 0) {
		imgloadflag = 1;
		LoadImg_Title();
	}
}

void TitleDraw()
{
	DrawGraph(0, 0, machine, TRUE);
}

void LoadImg_Title()
{
	machine = LoadGraph("img/machine.png");
}

void ReleaseImg_Title()
{
	DeleteGraph(machine);
	imgloadflag = 0;
}