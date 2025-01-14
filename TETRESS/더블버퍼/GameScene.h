#pragma once
#include <iostream>
#include <fstream>
#include "GameDefine.h"
#include "Scene.h"
#include "DoubleBuffer.h"
#include "SceneManager.h"
#include "Block.h"
#include "downcheck.h"
#include "leftcheck.h"
#include "rightcheck.h"
#include "turncheck.h" 

extern DoubleBuffer	*g_pDB;	// 더블버퍼
extern CSceneManager*g_pSM;
extern bool				gameExit;

class GameScene :
	public CScene
{
public :
	virtual void			Init(CSceneManager*);
	virtual void			Update(float dt);
	virtual void			Render(float dt);
	virtual void			Destroy();
	
	void MapClear();
	void input();
	void linecheck();
	void gameover();
	void levels();
	void scores();
	void scoreing();
	void nextblocks();

	char textl[256];
	char text[256];
	bool deletecheck = false;
	bool gameovers = false;
	bool linechecks = true;
	bool left_check		= false;
	bool right_check	= false;
	bool turn_check		= false;
	bool isKeyDownUp	= false;
	bool isKeyspace		= false;
	bool isKeyDown		= false;
	bool down_check		= false;
	bool puace = false;

	char lv[256];
	int speed = 15;
	int score = 0;
	int level = 1;
	
	int deleteline = 0;
	int block[4][4];
	int nextblock = (rand() % 7) + 1;
	int check = 0;
	int x = 6;
	int y = 1;
	int tyep = (rand()%7) + 1;
	int turn = 1;
	int index = 0;
	float Time = 0;
	
	void gotoxy(int x, int y) { //gotoxy함수 
		COORD pos = { 2 * x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	

	int Map2[48][32];
	int Map[24][16] =
	{
		{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
		{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 }
	};

	



public:
	GameScene();
	~GameScene();
};

