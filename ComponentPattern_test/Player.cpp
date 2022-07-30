#include "Player.h"

#include "ItemComponent.h"
#include "MissionComponent.h"

Player::Player()
{
	Initialize();
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
