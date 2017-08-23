#pragma once

#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Microsoft
{
	namespace Win32
{
	class RegistryKey : public MarshalByRefObject // 0x18
	{
	public:
		System::Object handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object hive; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* qname; // 0x28 (size: 0x8, flags: 0x21, type: 0xe)
		bool isRemoteRoot; // 0x30 (size: 0x1, flags: 0x21, type: 0x2)
		bool isWritable; // 0x31 (size: 0x1, flags: 0x21, type: 0x2)
	}; // size = 0x38
}
