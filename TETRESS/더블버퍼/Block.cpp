#include "Block.h"


void Block::tyeps(GameScene* pgame, int type, int turn)
{
	GameScene* game = pgame;

	switch (type)
	{
	case 1:
		switch (turn)
		{
		case 1:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[2][1] = 2;
			game->block[2][2] = 2;
			break;
		case 2:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[2][1] = 2;
			game->block[2][2] = 2;
			break;
		case 3:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[2][1] = 2;
			game->block[2][2] = 2;
			break;
		case 4:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[2][1] = 2;
			game->block[2][2] = 2;
			break;
		}
		break;
	case 2:
		switch (turn)
		{
		case 1:
			blockclear(pgame);
			game->block[1][0] = 2;
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[1][3] = 2;
			break;
		case 2:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			game->block[3][2] = 2;
			break;
		case 3:
			blockclear(pgame);
			game->block[1][0] = 2;
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[1][3] = 2;
			break;
		case 4:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			game->block[3][2] = 2;
			break;
		}
		break;
	case 3:
		switch (turn)
		{
		case 1:
			blockclear(pgame);
			game->block[2][1] = 2;
			game->block[2][2] = 2;
			game->block[1][2] = 2;
			game->block[1][3] = 2;
			
			break;
		case 2:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[1][2] = 2;
			game->block[1][3] = 2;
			game->block[2][3] = 2;
			break;
		case 3:
			blockclear(pgame);
			game->block[2][1] = 2;
			game->block[2][2] = 2;
			game->block[1][2] = 2;
			game->block[1][3] = 2;

			break;
		case 4:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[1][2] = 2;
			game->block[1][3] = 2;
			game->block[2][3] = 2;
			break;
		}
		break;
	case 4:
		switch (turn)
		{
		case 1:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			game->block[2][3] = 2;
			break;
		case 2:
			blockclear(pgame);
			game->block[0][3] = 2;
			game->block[1][3] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			break;
		case 3:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			game->block[2][3] = 2;
			break;
		case 4:
			blockclear(pgame);
			game->block[0][3] = 2;
			game->block[1][3] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			break;
		}
		break;
	case 5:
		switch (turn)
		{
		case 1:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[2][1] = 2;
			game->block[1][2] = 2;
			game->block[1][3] = 2;
			break;
		case 2:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[2][3] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			break;
		case 3:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[1][3] = 2;
			game->block[0][3] = 2;
			break;
		case 4:
			blockclear(pgame);
			game->block[0][1] = 2;
			game->block[0][2] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			break;
		}
		break;
	case 6:
		switch (turn)
		{
		case 1:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[1][3] = 2;
			game->block[1][2] = 2;
			game->block[2][3] = 2;
			break;
		case 2:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[0][3] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			break;
		case 3:
			blockclear(pgame);
			game->block[0][1] = 2;
			game->block[1][1] = 2;
			game->block[1][2] = 2;
			game->block[1][3] = 2;
			break;
		case 4:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[2][1] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			break;
		}
		break;
	case 7:
		switch (turn)
		{
		case 1:
			blockclear(pgame);
			game->block[1][1] = 2;
			game->block[1][3] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			break;
		case 2:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[1][3] = 2;
			game->block[1][2] = 2;
			game->block[2][2] = 2;
			break;
		case 3:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[1][3] = 2;
			game->block[1][2] = 2;
			game->block[1][1] = 2;
			break;
		case 4:
			blockclear(pgame);
			game->block[0][2] = 2;
			game->block[2][2] = 2;
			game->block[1][2] = 2;
			game->block[1][1] = 2;
			break;
		}
		break;
	}
	// block 안에 Link.block_L의 배열을 넣음
}

void Block::blockclear(GameScene *pScene)
{
	GameScene* games = pScene;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			games->block[i][j] = 0;
		}
	}
}

Block::Block()
{
}


Block::~Block()
{
}

