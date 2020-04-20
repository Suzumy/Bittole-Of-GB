#include "DxLib.h"
#include "SceneMgr.h"
#include "Title.h"

//�摜�p�ϐ�
int machine, gametitle;

//�t���O
int imgloadflag = 0;

//�L�[���͎��듮��h�~�p�J�E���g
int count_title = 0;

void TitleUpdate()
{
	if (imgloadflag == 0) {
		imgloadflag = 1;
		LoadImg_Title();
	}

	count_title++;
	if (count_title >= 60) {
		//���̉�ʂւ̑J��
		if (CheckHitKey(KEY_INPUT_SPACE) != 0) {
			ChangeScene(eScene_Game);
			ReleaseImg_Title();
		}
	}
}

void TitleDraw()
{
	//�摜�̕\��
	DrawGraph(0, 0, machine, TRUE);
	DrawGraph(200, 100, gametitle, TRUE);

	//������̕\��
	DrawString(200, 300, "�X�y�[�X�L�[�ŃX�^�[�g", GetColor(0, 0, 0));

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