#include "PlayerInfo.h"
#include <iostream>


PlayerInfo::PlayerInfo()
{
}


PlayerInfo::~PlayerInfo()
{
}


void PlayerInfo::AddPlayer(map<int, PlayerInfo*>* a_PlayerInfo)	//김탱님
{
	//평소 하던대로 이름이랑 패스워드 입력받아서 플레이어 정보를 맵에 넣어주세요.
	//Key값으로 회원번호를 넣어주시고 Second값에 아이디랑 비밀번호를 넣어주세요.
	//string형식은 scanf가 안된다고 하니 입력시킬때 c++언어인 cin을 사용해주세요.
	SaveFile(a_PlayerInfo);
}

void PlayerInfo::SaveFile(map<int, PlayerInfo*>* a_PlayerInfo)	//김탱님
{
	//파일저장
}

void PlayerInfo::LoadFile(map<int, PlayerInfo*>* a_PlayerInfo)	//김탱님
{
	//파일로드
}



void PlayerInfo::Login(map<int, PlayerInfo*>* a_PlayerInfo)		//수현님
{
	//로그인 기능 4명 로그인 시키기
	//4명의 로그인에 성공해야 3번을 실행할 수 있으니
	//3번을 실행 시킬 수 있는 조건을 설정해주세요.
}