#include "Card.h"

Card::Card()
{
}


Card::~Card()
{
}


void Card::SettingCard(vector<Card*>* a_Cardlist)	//����
{
	//����... �������غ��ڽ��ϴ�..
}

void Card::SortingCard(vector<Card*>* a_Cardlist, map<int, PlayerInfo*>* a_PlayerInfo)	//������
{
	//SettingCard���� ������� ������ ����ī�带 �������� ���
	//4���� �� �÷��̾�� 13�徿 �����մϴ�.
}

void Card::ShowPlayerlist(vector<Card*>* a_Cardlist, map<int, PlayerInfo*>* a_PlayerInfo)//������
{
	// <n�� �÷��̾�(���̵�)>
	//  <���� ī�� ���>
	//		 ��
	//		 ��
}

void Card::RankedPlayer(vector<Card*>* a_Cardlist, map<int, PlayerInfo*>* a_PlayerInfo)	//ȿ����
{
	// <n�� �÷��̾�(���̵�)> - n�� (ī�� ����)
	//					��
	//					��
}