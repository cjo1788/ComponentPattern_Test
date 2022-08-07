#include <iostream>
#include "Player.h"
#include "Component/Component.h"

using namespace std;


int main()
{
	// TODO:
	// User�� Component �� �����س��� GetComponents �Լ��� ��� Components  ��������
	Player* player = new Player();

	auto ComponentList = player->GetComponents();

	for (auto comp : ComponentList)
	{
		comp->Print();
	}

	return 0;
}