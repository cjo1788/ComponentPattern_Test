#include "ItemComponent.h"
#include "../../System/Item/InventorySystem.h"

ItemComponent::ItemComponent()
{
}

ItemComponent::~ItemComponent()
{
}

InventorySystem* ItemComponent::GetInventorySystem()
{
	return inventorySystem;
}
