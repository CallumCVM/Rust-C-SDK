#pragma once

#include "SoundDefinition.h"
#include "..\UnityEngine\Collider.h"
#include "LODCell.h"
#include "..\System\Collections\Generic\Dictionary<UnityEngine\GameObject,UnityEngine\Vector3>.h"

namespace rust 
{
	class MovementSoundTrigger : public TriggerBase // 0x30
	{
	public:
		SoundDefinition* softSound; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* medSound; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* hardSound; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Collider* collider; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		LODCell* cell; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::Dictionary<UnityEngine::GameObject,UnityEngine::Vector3> lastPositionByObject; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x60
}
