#include "DxLib.h"
#include "SceneMgr.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(600, 700, 32);		  //��ʃT�C�Y�̐ݒ�
	SetBackgroundColor(255, 255, 255); //�w�i�F�𔒂ɐݒ�
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		SceneMgrUpdate();	//�X�V�p
		SceneMgrDraw();		//�`��p
	}	

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}