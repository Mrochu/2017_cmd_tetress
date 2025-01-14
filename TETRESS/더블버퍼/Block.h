#pragma once
#include "GameScene.h"
class GameScene;
class Block
{
public:
	void tyeps(GameScene* pgame, int type, int turn);
	void blockclear(GameScene *pScene);
	Block();
	~Block();
};

