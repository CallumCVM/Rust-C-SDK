#pragma once

#include "..\Newtonsoft\Json\JsonContainerType.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonPosition : public ValueType // 0x0
	{
	public:
		Newtonsoft::Json::JsonContainerType Type; // 0x10 (size: 0x4, flags: 0x3, type: 0x11)
		int Position; // 0x14 (size: 0x4, flags: 0x3, type: 0x8)
		UnityEngine::UnicodeString* PropertyName; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		bool HasIndex; // 0x20 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x28
}
