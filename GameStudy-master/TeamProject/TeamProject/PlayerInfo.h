#pragma once
#include <string>
#include <map>
using namespace std;

class PlayerInfo
{
	string User_ID;	//�������̵�
	string User_PW;	//������й�ȣ

public:
	PlayerInfo();
	~PlayerInfo();

	void AddPlayer(map<int, PlayerInfo*>* a_PlayerInfo);	//��
	void SaveFile(map<int, PlayerInfo*>* a_PlayerInfo);		//��
	void LoadFile(map<int, PlayerInfo*>* a_PlayerInfo);		//��

	void Login(map<int, PlayerInfo*>* a_PlayerInfo);		//������
};

