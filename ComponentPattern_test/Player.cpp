#include "Player.h"


#include "Component/Component.h"
#include "Component/Item/ItemComponent.h"
#include "Component/Mission/MissionComponent.h"

Player::Player()
{
	Initialize_Component();
}

Player::~Player()
{
	ComponentList.clear();

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
	ComponentList.push_back(itemComponent);

	missionComponent = new MissionComponent();
	ComponentList.push_back(missionComponent);

}

ItemComponent* Player::GetItemComponent()
{
	return nullptr;
}

MissionComponent* Player::GetMissionComponent()
{
	return nullptr;
}

list<IComponent*> Player::GetComponents()
{
	return ComponentList;
}
