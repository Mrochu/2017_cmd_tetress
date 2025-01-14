#include "GameScene.h"
#include <time.h>
void GameScene::Init(CSceneManager *)
{
}

void GameScene::Update(float dt)
{
	// g_pDB->writeBuffer(0, 0, "GameScene Update\n");
	levels();
	scores();
}

#pragma comment(lib, "winmm.lib")

#define SOUND_FILE_NAME ".\\sound\\tsound.wav"



void GameScene::Render(float dt)
{
	if (gameovers == true)
	{
		scoreing();
	}
	if (gameovers == false)
	{

		

		if (puace == false)
		{

			PlaySound(NULL, 0, 0);

			turncheck Linkturncheck;
			Linkturncheck.turnchecks(this, tyep, turn);

			PlaySound(TEXT(SOUND_FILE_NAME), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);


			input();
			linecheck();
			gameover();
			levels();
			scores();
			nextblocks();

			

			g_pDB->writeBuffer(40, 21, "��    : ȸ��");
			g_pDB->writeBuffer(38, 22, "��  ��  :������/���� �̵�");
			g_pDB->writeBuffer(40, 23, "��    : �Ʒ��� ����");
			g_pDB->writeBuffer(40, 24, "ENTER : ��������");
			g_pDB->writeBuffer(40, 25, "ESC   : ����");

			switch (level)
			{
			case 15:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 3;
				}
			case 14:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 4;
				}
			case 13:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 5;
				}
			case 12:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 6;
				}
			case 11:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 7;
				}
			case 10:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 8;
				}
			case 9:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 9;
				}
			case 8:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 10;
				}
			case 7:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 11;
				}
			case 6:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 12;
				}
			case 5:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 13;
				}
			case 4: case 3: case 2: case 1:
				if (GetTickCount() - Time > 15)
				{
					Time = GetTickCount();
					index++;
					index %= 14;
				}
			}
			switch (index)
			{
			case 0:
				downcheck Linkdowncheck;					// �浹üũ�� true�� ��ȯ
				Linkdowncheck.downchecks(this, tyep, turn);

				if (down_check == false)
				{
					MapClear();
					y++;
				}
				break;

			}
			downcheck Linkdowncheck;					// �浹üũ�� true�� ��ȯ
			Linkdowncheck.downchecks(this, tyep, turn);


			leftcheck Linkleftcheck;
			Linkleftcheck.leftchecks(this, tyep, turn);

			rightcheck Linkrightcheck;
			Linkrightcheck.rightchecks(this, tyep, turn);

			Block LinkBlock;
			LinkBlock.tyeps(this, tyep, turn);


			for (int i = 0; i < 4; i++)
			{
				for (int a = 0; a < 4; a++)
				{
					if (block[i][a] == 2)
					{
						Map[y + i][x + a] = 2;
					}
				}
			}//Map�ȿ� block�� �ִ´�

			if (down_check == true)
			{

				for (int i = 0; i < 24; i++)
				{
					for (int a = 0; a < 16; a++)
					{
						if (Map[i][a] == 2)
						{
							Map[i][a] = 3;
						}
					}	//��������̴� ��(2)�� �����Ⱥ�(3) ���� �ٲپ� ����  
				}
				//������ �ʱⰪ���� �ٲ۴�
				x = 6;
				y = 1;

				srand((unsigned int)time(NULL));

				tyep = nextblock;
				nextblock = (rand() % 7) + 1;
				nextblocks();

				turn = 1;
				left_check = false;
				right_check = false;
				turn_check = false;

				//�ٲ� tyep(������) �� turn(ȸ����)�� �־ ���� �ٲپ��ش�
				Block LinkBlock;
				LinkBlock.tyeps(this, tyep, turn);

				for (int i = 0; i < 4; i++)
				{
					for (int a = 0; a < 4; a++)
					{
						if (block[i][a] == 2)
						{
							Map[y + i][x + a] = 2;
						}
					}
				}//Map�ȿ� block�� �ִ´�
				left_check = false;
				right_check = false;
				turn_check = false;
				down_check = false;

				score = score + level;
				scores();


			}

			for (int i = 0; i < 24; i++)
			{
				for (int a = 0; a < 16; a++)
				{
					Map2[i][a * 2] = Map[i][a];
				}
			}//�̹�� �迭�ȿ� ���� �迭�� �ִ´�

		}
	}
	

		for (int i = 0; i < 48; i++)
		{
			for (int a = 0; a < 32; a += 2)
			{
				if (Map2[i][a] == 1)
				{
					g_pDB->writeBuffer(a + 3, i + 3, "��");
				}

				if (Map2[i][a] == 2)
				{
					g_pDB->writeBuffer(a + 3, i + 3, "��");
				}

				if (Map2[i][a] == 3)
				{
					g_pDB->writeBuffer(a + 3, i + 3, "��");
				}
			}
		}
	
	/*x++;
	x %= 18;
	y %= 18;
	y++;

	if (GetTickCount() - time > 100)
	{
		time = GetTickCount();
		check = (check==0)?1:0;
	}

	for (int i = 0; i < 20; i+=1)
	{
		for (int j = 0; j < 40; j+=2)
		{
			g_pDB->writeBuffer(j, i, ((i+(j/2)) % 2 == check)?"��":"��");
		}
	}

	g_pDB->writeBuffer(x, y-1, "������������������������");
	g_pDB->writeBuffer(x, y , "������ Hello World������");
	g_pDB->writeBuffer(x, y+1, "������������������������");
	*/
}

void GameScene::Destroy()
{

}

void GameScene::MapClear()
{
	
		for (int i = 0; i < 24; i++)
		{
			for (int a = 0; a < 16; a++)
			{
				if (Map[i][a] == 2)
				{
					Map[i][a] = 0;
				}
			}
		}//Map�ʱ�ȭ
	
}

void GameScene::input()
{
	if (GetAsyncKeyState(VK_ESCAPE))
	{
		puace == true;
		if (puace == true)
		{
			g_pDB->writeBuffer(40, 6,  "�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�");
			g_pDB->writeBuffer(40, 7,  "��                                            ��");
			g_pDB->writeBuffer(40, 8,  "��   ����  ������   ����    �����  ��");
			g_pDB->writeBuffer(40, 9,  "��   ��          ��     ��      ��  ��    ��  ��");
			g_pDB->writeBuffer(40, 10, "��   ����      ��     ��      ��  �����  ��");
			g_pDB->writeBuffer(40, 11, "��       ��      ��     ��      ��  ��        ��");
			g_pDB->writeBuffer(40, 12, "��   ����      ��       ����    ��        ��");
			g_pDB->writeBuffer(40, 13, "��                                            ��");
			g_pDB->writeBuffer(40, 14, "�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�");

			g_pDB->writeBuffer(40, 21, "��    : ȸ��");
			g_pDB->writeBuffer(38, 22, "��  ��  :������/���� �̵�");
			g_pDB->writeBuffer(40, 23, "��    : �Ʒ��� ����");
			g_pDB->writeBuffer(40, 24, "ENTER : ��������");
			g_pDB->writeBuffer(40, 25, "ESC   : ����");

			if (GetAsyncKeyState(VK_ESCAPE))
			{
				puace == false;

			}
		}
	}

	if (GetAsyncKeyState(VK_RETURN))
	{
		if (!isKeyspace)
		{
			
			do {
				downcheck Linkdowncheck;					// �浹üũ�� true�� ��ȯ
				Linkdowncheck.downchecks(this, tyep, turn);

				if (down_check == false)
				{
					MapClear();
					y++;
				}
			} while (down_check == false);

			isKeyspace = true;
		}
	}
	
	else if (isKeyspace)
	{
		isKeyspace = false;
	}


	if (GetAsyncKeyState(VK_UP))
	{
		turncheck Linkturncheck;
		Linkturncheck.turnchecks(this, tyep, turn);

		if (turn_check == false)
		{
			if (!isKeyDownUp)
			{
				isKeyDownUp = true;
				MapClear();
				turn = turn + 1;
				if (turn == 5)
				{
					turn = 1;
				}
				left_check = false;
				right_check = false;
			}
		}
	}

	else if (isKeyDownUp)
	{

		isKeyDownUp = false;
	}


	if (GetAsyncKeyState(VK_RIGHT))
	{
		rightcheck Linkrightcheck;
		Linkrightcheck.rightchecks(this, tyep, turn);

		
		if (right_check == false)
		{
			left_check = false;
			MapClear();
			x++;
		}
	}

	
	if (GetAsyncKeyState(VK_LEFT))
	{
		leftcheck Linkleftcheck;
		Linkleftcheck.leftchecks(this, tyep, turn);

		if (left_check == false)
		{
			right_check = false;
			MapClear();
			x--;
		}
	}

	

	if (GetAsyncKeyState(VK_DOWN))
	{

		downcheck Linkdowncheck;					// �浹üũ�� true�� ��ȯ
		Linkdowncheck.downchecks(this, tyep, turn);

		if (down_check == false)
		{
			MapClear();
			y++;
		}

	}

	
}


void GameScene::linecheck()
{
	for (int i = 3; i < 23; i++)
	{
		for (int a = 1; a < 15; a++)
		{
			if (Map[i][a] != 3)
			{
				linechecks = false;
			}
		}	
		if (linechecks == true)
		{
			deleteline = i;
		}
		linechecks = true;
	}
	if (deleteline != 0)
	{
		score = (level * 2) + score;
		for (int a = 1; a < 15; a++)
		{
			Map[deleteline][a] = 0;
		}

		for (int i = deleteline - 1; i > 4; i--)
		{
			for (int a = 1; a < 15; a++)
			{
				if (Map[i][a] == 3)
				{
					Map[i][a] = 0;
					Map[i + 1][a] = 3;
				}
			}
		}
		deleteline = 0;
		
		
	}
}

void GameScene::gameover()
{
	
		for (int a = 1; a < 15; a++)
		{
			if (Map[3][a] == 3)
			{
				gameovers = true;
			}
		}
}

void GameScene::levels()
{
		
}

void GameScene::scores()
{
	sprintf(text, "%d", score);
	g_pDB->writeBuffer(40, 16, "score : ");
	g_pDB->writeBuffer(48, 16, text);

	
	sprintf(textl, "%d", level);
	g_pDB->writeBuffer(40, 18, "level : ");
	g_pDB->writeBuffer(48, 18, textl);

	if (score > 10)
	{
		if (level == 1)
		{
			level++;
			speed--;
		}
	}

	if (score > 20)
	{
		if (level == 2)
		{
			level++;
			speed--;
		}
	}

	if (score > 35)
	{
		if (level == 3)
		{
			level++;
			speed--;
		}
	}
	if (score > 55)
	{
		if (level == 4)
		{
			level++;
			speed--;
		}
	}
	if (score > 100)
	{
		if (level == 5)
		{
			level++;
			speed--;
		}
	}
	if (score > 200)
	{
		if (level == 6)
		{
			level++;
			speed--;
		}
	}
	if (score > 500)
	{
		if (level == 7)
		{
			level++;
			speed--;
		}
	}
	if (score > 1000)
	{
		if (level == 8)
		{
			level++;
			speed--;
		}
	}

	if (score > 1200)
	{
		if (level == 9)
		{
			level++;
			speed--;
		}
	}

	if (score > 1500)
	{
		if (level == 10)
		{
			level++;
			speed--;
		}
	}

	if (score > 1800)
	{
		if (level == 11)
		{
			level++;
			speed--;
		}
	}

	if (score > 2100)
	{
		if (level == 12)
		{
			level++;
			speed--;
		}
	}

	if (score > 2500)
	{
		if (level == 13)
		{
			level++;
			speed--;
		}
	}

	
}

void GameScene::scoreing()
{
	char text[256];
	sprintf(text, "%d", score);
	
	g_pDB->writeBuffer(40, 6,  "�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�");
	g_pDB->writeBuffer(40, 7,  "��                              ��");
	g_pDB->writeBuffer(40, 8,  "��  +-----------------------+   ��");
	g_pDB->writeBuffer(40, 9,  "��  |  G A M E  O V E R..   |   ��");
	g_pDB->writeBuffer(40, 10, "��  +-----------------------+   ��");
	g_pDB->writeBuffer(40, 11, "��            ������ X          ��"); 
	g_pDB->writeBuffer(40, 12, "��   YOUR SCORE :               ��");
	g_pDB->writeBuffer(59, 12, text);
	g_pDB->writeBuffer(40, 13, "��                              ��");
	g_pDB->writeBuffer(40, 14, "�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�");

	g_pDB->writeBuffer(40, 21, "��    : ȸ��");
	g_pDB->writeBuffer(38, 22, "��  ��  :������/���� �̵�");
	g_pDB->writeBuffer(40, 23, "��    : �Ʒ��� ����");
	g_pDB->writeBuffer(40, 24, "ENTER : ��������");
	g_pDB->writeBuffer(40, 25, "ESC   : ����");

	if (GetAsyncKeyState(0x58))
	{
		gameExit = true;
	}

	
	
	
}

void GameScene::nextblocks()
{
	switch (nextblock)
	{
	case 1:
		g_pDB->writeBuffer(40, 6,  "�ǢǢǢǢǢǢǢ�");
		g_pDB->writeBuffer(40, 7,  "��    NEXT    ��");
		g_pDB->writeBuffer(40, 8,  "��            ��");
		g_pDB->writeBuffer(40, 9,  "��    ���    ��");
		g_pDB->writeBuffer(40, 10, "��    ���    ��");
		g_pDB->writeBuffer(40, 11, "��            ��");
		g_pDB->writeBuffer(40, 12, "��            ��");
		g_pDB->writeBuffer(40, 13, "�ǢǢǢǢǢǢǢ�");
		break;
	case 2:
		g_pDB->writeBuffer(40, 6,  "�ǢǢǢǢǢǢǢ�");
		g_pDB->writeBuffer(40, 7,  "��    NEXT    ��");
		g_pDB->writeBuffer(40, 8,  "��     ��     ��");
		g_pDB->writeBuffer(40, 9,  "��     ��     ��");
		g_pDB->writeBuffer(40, 10, "��     ��     ��");
		g_pDB->writeBuffer(40, 11, "��     ��     ��");
		g_pDB->writeBuffer(40, 12, "��            ��");
		g_pDB->writeBuffer(40, 13, "�ǢǢǢǢǢǢǢ�");
		break;
	case 3:
		g_pDB->writeBuffer(40, 6,  "�ǢǢǢǢǢǢǢ�");
		g_pDB->writeBuffer(40, 7,  "��    NEXT    ��");
		g_pDB->writeBuffer(40, 8,  "��            ��");
		g_pDB->writeBuffer(40, 9,  "��     ���   ��");
		g_pDB->writeBuffer(40, 10, "��   ���     ��");
		g_pDB->writeBuffer(40, 11, "��            ��");
		g_pDB->writeBuffer(40, 12, "��            ��");
		g_pDB->writeBuffer(40, 13, "�ǢǢǢǢǢǢǢ�");
		break;
	case 4:
		g_pDB->writeBuffer(40, 6,  "�ǢǢǢǢǢǢǢ�");
		g_pDB->writeBuffer(40, 7,  "��    NEXT    ��");
		g_pDB->writeBuffer(40, 8,  "��            ��");
		g_pDB->writeBuffer(40, 9,  "��   ���     ��");
		g_pDB->writeBuffer(40, 10, "��     ���   ��");
		g_pDB->writeBuffer(40, 11, "��            ��");
		g_pDB->writeBuffer(40, 12, "��            ��");
		g_pDB->writeBuffer(40, 13, "�ǢǢǢǢǢǢǢ�");
		break;
	case 5:
		g_pDB->writeBuffer(40, 6,  "�ǢǢǢǢǢǢǢ�");
		g_pDB->writeBuffer(40, 7,  "��    NEXT    ��");
		g_pDB->writeBuffer(40, 8,  "��            ��");
		g_pDB->writeBuffer(40, 9,  "��   ����   ��");
		g_pDB->writeBuffer(40, 10, "��   ��       ��");
		g_pDB->writeBuffer(40, 11, "��            ��");
		g_pDB->writeBuffer(40, 12, "��            ��");
		g_pDB->writeBuffer(40, 13, "�ǢǢǢǢǢǢǢ�");
		break;
	case 6:
		g_pDB->writeBuffer(40, 6,  "�ǢǢǢǢǢǢǢ�");
		g_pDB->writeBuffer(40, 7,  "��    NEXT    ��");
		g_pDB->writeBuffer(40, 8,  "��            ��");
		g_pDB->writeBuffer(40, 9,  "��   ����   ��");
		g_pDB->writeBuffer(40, 10, "��       ��   ��");
		g_pDB->writeBuffer(40, 11, "��            ��");
		g_pDB->writeBuffer(40, 12, "��            ��");
		g_pDB->writeBuffer(40, 13, "�ǢǢǢǢǢǢǢ�");
		break;
	case 7:
		g_pDB->writeBuffer(40, 6,  "�ǢǢǢǢǢǢǢ�");
		g_pDB->writeBuffer(40, 7,  "��    NEXT    ��");
		g_pDB->writeBuffer(40, 8,  "��            ��");
		g_pDB->writeBuffer(40, 9,  "��   ����   ��");
		g_pDB->writeBuffer(40, 10, "��     ��     ��");
		g_pDB->writeBuffer(40, 11, "��            ��");
		g_pDB->writeBuffer(40, 12, "��            ��");
		g_pDB->writeBuffer(40, 13, "�ǢǢǢǢǢǢǢ�");
		break;
	}
}

GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}
