#include "ItemComponent.h"

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
