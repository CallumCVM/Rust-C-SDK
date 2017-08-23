#pragma once

#include "..\System\Xml\Serialization\HookType.h"
#include "..\System\Xml\Serialization\Select.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class Hook : public Object // 0x0
	{
	public:
		System::Xml::Serialization::Select* Select; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* InsertBefore; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* InsertAfter; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Replace; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		System::Xml::Serialization::HookType HookType; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
