#include "DxLib.h"
#include "SceneMgr.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(600, 700, 32);		  //画面サイズの設定
	SetBackgroundColor(255, 255, 255); //背景色を白に設定
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		SceneMgrUpdate();	//更新用
		SceneMgrDraw();		//描画用
	}	

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}