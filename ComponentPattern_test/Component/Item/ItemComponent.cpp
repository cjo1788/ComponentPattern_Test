#include "ItemComponent.h"
#include "../../System/Item/InventorySystem.h"

ItemComponent::ItemComponent()
{
	inventorySystem = new InventorySystem();
}

ItemComponent::~ItemComponent()
{
	delete inventorySystem;
	inventorySystem = nullptr;
}

void ItemComponent::Print()
{
	cout << "ItemComponent" << endl;
}

InventorySystem* ItemComponent::GetInventorySystem()
{
	return inventorySystem;
}
