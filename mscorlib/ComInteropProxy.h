#pragma once

#include "..\System\__ComObject.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Interop
{
	class ComInteropProxy : public RealProxy // 0x50
	{
	public:
		System::__ComObject* com_object; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		int ref_count; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* type_name; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x68
}
