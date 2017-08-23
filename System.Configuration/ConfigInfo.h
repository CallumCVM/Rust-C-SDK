#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Configuration\ConfigInfo.h"
#include "..\System\Configuration\Internal\IInternalConfigHost.h"

namespace System
{
	namespace Configuration
{
	class ConfigInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* TypeName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		System::Type* Type; // 0x20 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UnicodeString* streamName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigInfo* Parent; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		System::Configuration::Internal::IInternalConfigHost* ConfigHost; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x40
}
