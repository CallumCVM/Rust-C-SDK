#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\Assembly.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Type.h"
#include "..\System\Globalization\CultureInfo.h"
#include "..\System\Resources\UltimateResourceFallbackLocation.h"

namespace System
{
	namespace Resources
{
	class ResourceManager : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* BaseNameField; // 0x10 (size: 0x8, flags: 0x4, type: 0xe)
		System::Reflection::Assembly* MainAssembly; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		System::Collections::Hashtable* ResourceSets; // 0x20 (size: 0x8, flags: 0x4, type: 0x12)
		bool ignoreCase; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		System::Type* resourceSource; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* resourceSetType; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* resourceDir; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::Globalization::CultureInfo* neutral_culture; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Resources::UltimateResourceFallbackLocation fallbackLocation; // 0x50 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
