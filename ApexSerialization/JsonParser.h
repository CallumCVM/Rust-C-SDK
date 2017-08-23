#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Apex\Serialization\StringBuffer.h"
#include "..\System\Char.h"
#include "..\Apex\Serialization\StageContainer.h"

namespace Apex
{
	namespace Serialization
{
{
		namespace Json
{
	class JsonParser : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _s; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Apex::Serialization::StringBuffer* _b; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Char* _hexBuffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		Apex::Serialization::StageContainer* _curRoot; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int _idx; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int _length; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int _valStart; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int _valEnd; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
