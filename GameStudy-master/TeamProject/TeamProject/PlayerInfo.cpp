#include "PlayerInfo.h"
#include <iostream>


PlayerInfo::PlayerInfo()
{
}


PlayerInfo::~PlayerInfo()
{
}


void PlayerInfo::AddPlayer(map<int, PlayerInfo*>* a_PlayerInfo)	//���ʴ�
{
	//��� �ϴ���� �̸��̶� �н����� �Է¹޾Ƽ� �÷��̾� ������ �ʿ� �־��ּ���.
	//Key������ ȸ����ȣ�� �־��ֽð� Second���� ���̵�� ��й�ȣ�� �־��ּ���.
	//string������ scanf�� �ȵȴٰ� �ϴ� �Է½�ų�� c++����� cin�� ������ּ���.
	SaveFile(a_PlayerInfo);
}

void PlayerInfo::SaveFile(map<int, PlayerInfo*>* a_PlayerInfo)	//���ʴ�
{
	//��������
}

void PlayerInfo::LoadFile(map<int, PlayerInfo*>* a_PlayerInfo)	//���ʴ�
{
	//���Ϸε�
}



void PlayerInfo::Login(map<int, PlayerInfo*>* a_PlayerInfo)		//������
{
	//�α��� ��� 4�� �α��� ��Ű��
	//4���� �α��ο� �����ؾ� 3���� ������ �� ������
	//3���� ���� ��ų �� �ִ� ������ �������ּ���.
}