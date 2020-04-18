#include "Dxlib.h"
#include "SceneMgr.h"
#include "Title.h"
#include "Game.h"
#include "Result.h"

static eScene Scene = eScene_Title;

void SceneMgrUpdate()
{
	switch (Scene) {
	case eScene_Title:
		TitleUpdate();
		break;

	case eScene_Game:
		//GameUpdate();
		break;

	case eScene_Result:
		//ResultUpdate();
		break;
	}
}

void SceneMgrDraw()
{
	switch (Scene) {
	case eScene_Title:
		TitleDraw();
		break;

	case eScene_Game:
		//GameDraw();
		break;

	case eScene_Result:
		//ResultDraw();
		break;
	}
}

void ChangeScene(eScene NextScene)
{
	Scene = NextScene;
}