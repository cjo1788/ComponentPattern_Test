#include <iostream>
#include "Player.h"
#include "Component/Component.h"

using namespace std;


int main()
{
	// TODO:
	// User에 Component 들 생성해놓고 GetComponents 함수로 모든 Components  가져오기
	Player* player = new Player();

	auto ComponentList = player->GetComponents();

	for (auto comp : ComponentList)
	{
		comp->Print();
	}

	return 0;
}