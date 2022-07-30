#pragma once

#include "Component.h"
#include "InventorySystem.h"

class ItemComponent : public IComponent
{
private:
	InventorySystem* inventorySystem;

public:
	ItemComponent();
	virtual ~ItemComponent();

public:
	InventorySystem* GetInventorySystem();
};