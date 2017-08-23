#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Apex
{
	namespace AI
{
{
		namespace Components
{
	class UtilityAIConfig : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* aiId; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		float intervalMin; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float intervalMax; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float startDelayMin; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float startDelayMax; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		bool isActive; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
