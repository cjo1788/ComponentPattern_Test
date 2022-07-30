#pragma once


class ItemComponent;
class MissionComponent;

class Player
{
private:

	ItemComponent* itemComponent;
	MissionComponent* missionComponent;

public:
	Player();
	~Player();

	void Initialize_Component();

	ItemComponent* GetItemComponent();
	MissionComponent* GetMissionComponent();

};

