#include "GameDefine.h"
#include "DoubleBuffer.h"
#include "SceneManager.h"
#include "GameScene.h"
#include "MainScene.h" 


CSceneManager	*g_pSM; // ���Ŵ���
DoubleBuffer	*g_pDB;	// �������
bool			gameExit = false;	// ��������

void Init();

#ifndef DUBBLE_BUFFER
int time2;
int check2 = 0;
#endif

void main()
{
	Init();
	while (!gameExit)
	{

#ifndef DUBBLE_BUFFER
		if (GetTickCount() - time2 > 100)
		{
			time2 = GetTickCount();
			check2 = (check2 == 0) ? 1 : 0;
		}

		system("cls");
		for (int i = 0; i < 40; i += 1)
		{
			for (int j = 0; j < 80; j += 2)
			{
				std::cout << (((i + (j / 2)) % 2 == check2) ? "��" : "��");
			}
			std::cout << std::endl;
		}

#else
		g_pDB->clearBuffer();
		g_pSM->Render(FRAMETIME);
		g_pSM->Update(FRAMETIME);

		g_pDB->flippingBuffer();
#endif
	}
}

void Init()
{
	// ���� ���� ����/�ʱ�ȭ
	g_pDB = new DoubleBuffer;
	g_pDB->createBuffer(CONSOL_MAX_WIDTH, CONSOL_MAX_HEIGHT);

	// �� �Ŵ��� ����/�ʱ�ȭ
	g_pSM = new CSceneManager();
	g_pSM->registerScene("GameScene", new GameScene);
	g_pSM->registerScene("MainScene", new MainScene);
	


	g_pSM->reserveChangeScene("MainScene");
}
