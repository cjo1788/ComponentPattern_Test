#include "Player.h"

#include "Component/Item/ItemComponent.h"
#include "Component/Mission/MissionComponent.h"

Player::Player()
{
	Initialize_Component();
}

Player::~Player()
{
	if (itemComponent != nullptr)
	{
		delete itemComponent;
		itemComponent = nullptr;
	}

	if (missionComponent != nullptr)
	{
		delete missionComponent;
		missionComponent = nullptr;
		
	}
}

void Player::Initialize_Component()
{
	itemComponent = new ItemComponent();
	missionComponent = new MissionComponent();
}

ItemComponent* Player::GetItemComponent()
{
	return nullptr;
}

MissionComponent* Player::GetMissionComponent()
{
	return nullptr;
}
