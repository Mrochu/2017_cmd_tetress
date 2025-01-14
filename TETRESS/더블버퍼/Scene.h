#pragma once
#include <Windows.h>

class CSceneManager;

class CScene
{
public :
	CScene() = default;
	virtual ~CScene() = default;

public :
	virtual void			Init(CSceneManager*)		= 0;
	virtual void			Update(float dt)			= 0;
	virtual void			Render(float dt)			= 0;
	virtual void			Destroy()					= 0;

private :
	CSceneManager*			m_SceneManager;
};
