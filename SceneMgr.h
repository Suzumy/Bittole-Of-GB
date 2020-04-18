#pragma once

typedef enum {
	eScene_Title,	//タイトル画面
	eScene_Game,	//ゲーム画面
	eScene_Result,	//リザルト画面
} eScene;

void SceneMgrUpdate();

void SceneMgrDraw();

void ChangeScene(eScene NextScene);