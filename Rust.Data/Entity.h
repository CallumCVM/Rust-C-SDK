#pragma once

#include "..\ProtoBuf\BaseNetworkable.h"
#include "..\ProtoBuf\BaseEntity.h"
#include "..\ProtoBuf\BasePlayer.h"
#include "..\ProtoBuf\WorldItem.h"
#include "..\ProtoBuf\BaseResource.h"
#include "..\ProtoBuf\BuildingBlock.h"
#include "..\ProtoBuf\Environment.h"
#include "..\ProtoBuf\Corpse.h"
#include "..\ProtoBuf\ParentInfo.h"
#include "..\ProtoBuf\KeyLock.h"
#include "..\ProtoBuf\CodeLock.h"
#include "..\ProtoBuf\EntitySlots.h"
#include "..\ProtoBuf\BuildingPrivilege.h"
#include "..\ProtoBuf\StorageBox.h"
#include "..\ProtoBuf\HeldEntity.h"
#include "..\ProtoBuf\BaseProjectile.h"
#include "..\ProtoBuf\BaseNPC.h"
#include "..\ProtoBuf\Loot.h"
#include "..\ProtoBuf\GenericSpawner.h"
#include "..\ProtoBuf\SleepingBag.h"
#include "..\ProtoBuf\LootableCorpse.h"
#include "..\ProtoBuf\Sign.h"
#include "..\ProtoBuf\BaseCombat.h"
#include "..\ProtoBuf\MapEntity.h"
#include "..\ProtoBuf\ResearchTable.h"
#include "..\ProtoBuf\DudExplosive.h"
#include "..\ProtoBuf\MiningQuarry.h"
#include "..\ProtoBuf\PlantEntity.h"
#include "..\ProtoBuf\Helicopter.h"
#include "..\ProtoBuf\Landmine.h"
#include "..\ProtoBuf\AutoTurret.h"
#include "..\ProtoBuf\SphereEntity.h"
#include "..\ProtoBuf\StabilityEntity.h"
#include "..\ProtoBuf\OwnerInfo.h"
#include "..\ProtoBuf\DecayEntity.h"
#include "..\ProtoBuf\Spawnable.h"
#include "..\ProtoBuf\ServerGib.h"
#include "..\ProtoBuf\VendingMachine.h"
#include "..\ProtoBuf\SpinnerWheel.h"
#include "..\ProtoBuf\Lift.h"

namespace ProtoBuf
{
	class Entity : public Object // 0x0
	{
	public:
		ProtoBuf::BaseNetworkable* baseNetworkable; // 0x10 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::BaseEntity* baseEntity; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::BasePlayer* basePlayer; // 0x20 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::WorldItem* worldItem; // 0x28 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::BaseResource* resource; // 0x30 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::BuildingBlock* buildingBlock; // 0x38 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::Environment* environment; // 0x40 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::Corpse* corpse; // 0x48 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::ParentInfo* parent; // 0x50 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::KeyLock* keyLock; // 0x58 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::CodeLock* codeLock; // 0x60 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::EntitySlots* entitySlots; // 0x68 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::BuildingPrivilege* buildingPrivilege; // 0x70 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::StorageBox* storageBox; // 0x78 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::HeldEntity* heldEntity; // 0x80 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::BaseProjectile* baseProjectile; // 0x88 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::BaseNPC* baseNPC; // 0x90 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::Loot* loot; // 0x98 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::GenericSpawner* genericSpawner; // 0xa0 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::SleepingBag* sleepingBag; // 0xa8 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::LootableCorpse* lootableCorpse; // 0xb0 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::Sign* sign; // 0xb8 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::BaseCombat* baseCombat; // 0xc0 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::MapEntity* mapEntity; // 0xc8 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::ResearchTable* researchTable; // 0xd0 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::DudExplosive* dudExplosive; // 0xd8 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::MiningQuarry* miningQuarry; // 0xe0 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::PlantEntity* plantEntity; // 0xe8 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::Helicopter* helicopter; // 0xf0 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::Landmine* landmine; // 0xf8 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::AutoTurret* autoturret; // 0x100 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::SphereEntity* sphereEntity; // 0x108 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::StabilityEntity* stabilityEntity; // 0x110 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::OwnerInfo* ownerInfo; // 0x118 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::DecayEntity* decayEntity; // 0x120 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::Spawnable* spawnable; // 0x128 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::ServerGib* servergib; // 0x130 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::VendingMachine* vendingMachine; // 0x138 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::SpinnerWheel* spinnerWheel; // 0x140 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::Lift* lift; // 0x148 (size: 0x8, flags: 0x86, type: 0x12)
		bool createdThisFrame; // 0x150 (size: 0x1, flags: 0x86, type: 0x2)
		bool ShouldPool; // 0x151 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x152 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x158
}
