#pragma once
#include "GameDefine.h"

class CScene;

class CSceneManager
{
public:
	CSceneManager();
	~CSceneManager();

public :
	void							registerScene(const std::string& sceneName, CScene* scene);
	void							reserveChangeScene(const std::string& sceneName);

public :
	void							Update(float dt);
	void							Render(float dt);

private :
	std::map<std::string, CScene*>	m_SceneContainer;

	CScene*							m_ReservedScene;
	CScene*							m_CurrentScene;
};

