#include <stdio.h>
#include "Card.h"


//1�� �޴� - �����Ҷ����� �Ѹ��� ���̵�� �н����带 �Է¹ް� ȸ���� �߰��Ѵ�.

//2�� �޴� - (���ʿ� ȸ������ 4���� �ȵǸ� �α��� �޴��� ��������)
//			 4���� �α����� ���� ��Ų��.

//3�� �޴� - (�α����� �������� ���ϸ� �޴��� �� �� ����)
//			 1. ī�带 ������� �����Ѵ� (Ŭ�ι� 1~10 JQK ,���̾� 1~10 JQK .....)
//			 2. ī�带 ���´�.
//			 3. �÷��̾� ����Ʈ/���� ī���� ����Ѵ�.
//			 4. ī�带 �̿��ؼ� ������ ���ϰ� ����� ����Ѵ�.

// ����� ��������ssss

void main()
{
	PlayerInfo* _playerInfo = new PlayerInfo;
	Card* _card = new Card;
	map<int, PlayerInfo*> m_playerInfo;
	vector<Card*> v_card;

	_playerInfo->LoadFile(&m_playerInfo);		//���� �ҷ�����

	while (1)
	{
		printf("1.�÷��̾� �߰� 2.�α��� 3.�����ϱ� 4.������ : ");
		int a_Sel;
		scanf_s("%d", &a_Sel);
		getchar();

		if (a_Sel == 1)
		{
			_playerInfo->AddPlayer(&m_playerInfo);	//1�� ���ʴ� - �÷��̾� �߰�(4��)
			getchar();
			system("cls");
		}

		else if (a_Sel == 2)
		{
			_playerInfo->Login(&m_playerInfo);		//2�� ������ - �α��α��								
			getchar();
			system("cls");
		}

		else if (a_Sel == 3)					//4�� �α��� ���Ѿ� ���� ����
		{
			_card->SettingCard(&v_card);						//3�� ���� - ī�����
			_card->SortingCard(&v_card, &m_playerInfo);			//4�� ������ - ī�����
			_card->ShowPlayerlist(&v_card, &m_playerInfo);		//5�� ������ - �÷��̾� ����Ʈ ���
			_card->RankedPlayer(&v_card, &m_playerInfo);		//6�� ȿ���� - �÷��̾� ��� ���
			getchar();
			system("cls");
		}

		else
			break;
	}
}