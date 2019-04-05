#pragma once
#include <vector>
#include "PlayerInfo.h"
using namespace std;

class Card
{
	char m_pattern[4] = { 'C', 'D', 'S', 'H' };					//Ŭ�ι� ���̾� �����̵� ��Ʈ
	int m_cardNum;
	PlayerInfo* _playerInfo;

public:
	Card()
	{
		_playerInfo = new PlayerInfo();
	}
	~Card();

	void SettingCard(vector<Card*>*);							//����
	void SortingCard(vector<Card*>*, map<int, PlayerInfo*>*);	//������
	void ShowPlayerlist(vector<Card*>*, map<int, PlayerInfo*>*);//������
	void RankedPlayer(vector<Card*>*, map<int, PlayerInfo*>*);	//ȿ����
};

