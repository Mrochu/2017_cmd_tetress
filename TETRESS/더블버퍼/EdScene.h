#pragma once
#include "GameDefine.h"
#include "Scene.h"
#include "SceneManager.h"
#include "DoubleBuffer.h"

extern DoubleBuffer		*g_pDB;
extern CSceneManager	*g_pSM;
extern bool				gameExit;

class EdScene:
	public CScene
{
public:
	virtual void			Init(CSceneManager*);
	virtual void			Update(float dt);
	virtual void			Render(float dt);
	virtual void			Destroy();

	float count;
	int menu;

	EdScene();
	~EdScene();
};

