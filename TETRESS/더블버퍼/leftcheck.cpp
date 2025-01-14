#include "leftcheck.h"



void leftcheck::leftchecks(GameScene * pgame, int type, int turn)
{
	GameScene* game = pgame;

	switch (type)
	{
	case 1:
		switch (turn)
		{
		default:
			if (game->Map[(game->y) + 1][(game->x)] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y) + 2][(game->x) ] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y) + 1][(game->x)] == 3)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y) + 2][(game->x)] == 3)
			{
				game->left_check = true;
			}
			break;
		}
		break;
	case 2:
		switch (turn)
		{
		case 1 : case 3:
			if (game->Map[(game->y) + 1][(game->x) - 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) - 1] == 3)
			{
				game->left_check = true;
			}
			break;	
		case 2 : case 4:
			if (game->Map[(game->y)][(game->x)  + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1 ]  == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 3][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y)][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 3][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			break;
		}
		break;
	case 3:
		switch (turn)
		{
		case 1: case 3:
			if (game->Map[(game->y) + 2][(game->x)] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
		
			if (game->Map[(game->y) + 2][(game->x)] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}

			break;
		case 2:case 4:
			if (game->Map[(game->y)][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 2] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y)][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 2] == 3)
			{
				game->left_check = true;
			}
			break;
		}
		break;
	case 4:
		switch (turn)
		{
		case 1:case 3:
			if (game->Map[(game->y) + 1][(game->x)] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y) + 1][(game->x)] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			break;
		case 2:case 4:
			if (game->Map[(game->y)][(game->x) + 2] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y)][(game->x) + 2] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			break;
		}
		break;
	case 5:
		switch (turn)
		{
		case 1:
			if (game->Map[(game->y) + 1][(game->x)] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x)] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y) + 1][(game->x)] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x)] == 3)
			{
				game->left_check = true;
			}
			break;
		case 2:
			if (game->Map[(game->y)][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y)][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			break;
		case 3:
			if (game->Map[(game->y)][(game->x) + 2] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x)] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y)][(game->x) + 2] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x)] == 3)
			{
				game->left_check = true;
			}
			break;
		case 4:
			if (game->Map[(game->y)][(game->x)] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y)][(game->x)] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			break;
		}
		break;
	case 6:
		switch (turn)
		{
		case 1:
			if (game->Map[(game->y) + 1][(game->x)] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y)+ 2][(game->x) + 2] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x)] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 2] == 3)
			{
				game->left_check = true;
			}
			break;
		case 2:
			if (game->Map[(game->y)][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			break;
		case 3:
			if (game->Map[(game->y)][(game->x)] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x)] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y)][(game->x)] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x)] == 3)
			{
				game->left_check = true;
			}
			break;
		case 4:
			if (game->Map[(game->y)][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x)] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y)][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) ] == 3)
			{
				game->left_check = true;
			}
			break;
		}
		break;
	case 7:
		switch (turn)
		{
		case 1:
			if (game->Map[(game->y) + 1][(game->x)] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y) + 1][(game->x)] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			break;
		case 2:
			if (game->Map[(game->y) ][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y)][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			break;
		case 3:
			if (game->Map[(game->y) + 1][(game->x)] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y)][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}

			if (game->Map[(game->y) + 1][(game->x)] == 3)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y)][(game->x) + 1] == 3)
			{
				game->left_check = true;
			}
			break;
		case 4:
			if (game->Map[(game->y)][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 1][(game->x)] == 1)
			{
				game->left_check = true;
			}
			if (game->Map[(game->y) + 2][(game->x) + 1] == 1)
			{
				game->left_check = true;
			}
			break;
		}
		break;
	}
}

leftcheck::leftcheck()
{
}


leftcheck::~leftcheck()
{
}
