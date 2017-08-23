#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Unity\Bindings\NativeStructGenerateOption.h"

namespace Unity
{
	namespace Bindings
{
	class NativeStructAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Name>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Header>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		Unity::Bindings::NativeStructGenerateOption <GenerateMarshallingType>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
