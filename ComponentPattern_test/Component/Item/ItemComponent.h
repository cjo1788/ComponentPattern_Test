#pragma once

#include "../Component.h"

class InventorySystem;

class ItemComponent : public IComponent
{
private:
	InventorySystem* inventorySystem;

public:
	ItemComponent();
	virtual ~ItemComponent() override;

public:
	InventorySystem* GetInventorySystem();
};