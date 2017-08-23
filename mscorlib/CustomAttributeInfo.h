#pragma once

#include "..\System\Reflection\ConstructorInfo.h"
#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class CustomAttributeInfo : public ValueType // 0x0
	{
	public:
		System::Reflection::ConstructorInfo* ctor; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Object* ctorArgs; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** namedParamNames; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Object* namedParamValues; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x30
}
