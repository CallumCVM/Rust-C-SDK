#pragma once

#include "..\System\Reflection\Assembly.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\ResourceLocation.h"

namespace System
{
	namespace Reflection
{
	class ManifestResourceInfo : public Object // 0x0
	{
	public:
		System::Reflection::Assembly* _assembly; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _filename; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Reflection::ResourceLocation _location; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
