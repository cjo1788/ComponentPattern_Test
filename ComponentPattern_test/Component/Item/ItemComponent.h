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
		
	virtual void Print() override;

public:
	InventorySystem* GetInventorySystem();
};