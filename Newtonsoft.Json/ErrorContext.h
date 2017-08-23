#pragma once

#include "..\System\Exception.h"
#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class ErrorContext : public Object // 0x0
	{
	public:
		System::Exception* <Error>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object <OriginalObject>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object <Member>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* <Path>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool <Traced>k__BackingField; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool <Handled>k__BackingField; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
