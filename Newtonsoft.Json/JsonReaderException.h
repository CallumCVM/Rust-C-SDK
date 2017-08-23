#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonReaderException : public JsonException // 0x60
	{
	public:
		UnityEngine::UnicodeString* <Path>k__BackingField; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		int <LineNumber>k__BackingField; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int <LinePosition>k__BackingField; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
