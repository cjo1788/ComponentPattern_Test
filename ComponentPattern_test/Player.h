#pragma once
#include "Common/Global.h"

class IComponent;
class ItemComponent;
class MissionComponent;

class Player
{
private:
	list<IComponent*> ComponentList;

	ItemComponent* itemComponent;
	MissionComponent* missionComponent;

public:
	Player();
	~Player();

	void Initialize_Component();

	list<IComponent*> GetComponents();

	ItemComponent* GetItemComponent();
	MissionComponent* GetMissionComponent();
};

