#include "SceneManager.h"
#include "Scene.h"

using namespace std;

CSceneManager::CSceneManager() : m_CurrentScene(nullptr), m_ReservedScene(nullptr)
{
}


CSceneManager::~CSceneManager()
{
	for (auto it = m_SceneContainer.begin(); it != m_SceneContainer.end(); ++it)
	{
		it->second->Destroy();
		delete it->second;
	}
}

void CSceneManager::registerScene(const std::string & sceneName, CScene * scene)
{
	if (scene == nullptr || sceneName.compare("") == 0)
		return;

	m_SceneContainer.insert(m_SceneContainer.end(), pair<string, CScene*>(sceneName, scene));
}

void CSceneManager::reserveChangeScene(const std::string & sceneName)
{
	//if (m_CurrentScene != NULL) delete m_CurrentScene;

	auto it = m_SceneContainer.find(sceneName);

	if (it != m_SceneContainer.end())
	{
		m_ReservedScene = it->second;
	}
	else
		m_ReservedScene = nullptr;
}

void CSceneManager::Update(float dt)
{
	if (m_ReservedScene != nullptr)
	{
		m_ReservedScene->Init(this);
		m_CurrentScene = m_ReservedScene;

		m_ReservedScene = nullptr;
	}

	if (m_CurrentScene != nullptr)
		m_CurrentScene->Update(dt);
}

void CSceneManager::Render(float dt)
{
	if (m_CurrentScene != nullptr)
		m_CurrentScene->Render(dt);
}
