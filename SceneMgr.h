#pragma once

typedef enum {
	eScene_Title,	//�^�C�g�����
	eScene_Game,	//�Q�[�����
	eScene_Result,	//���U���g���
} eScene;

void SceneMgrUpdate();

void SceneMgrDraw();

void ChangeScene(eScene NextScene);