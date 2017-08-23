#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Apex
{
	class ApexComponentMaster : public MonoBehaviour // 0x18
	{
	public:
		System.Collections.Generic.Dictionary<int,Apex.ApexComponentMaster.ComponentInfo> _components; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,Apex.ApexComponentMaster.ComponentCategory> _categories; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		bool _firstTime; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		int _hiddenComponents; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
