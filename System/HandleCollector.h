#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class HandleCollector : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x21, type: 0xe)
		int count; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int init; // 0x1c (size: 0x4, flags: 0x21, type: 0x8)
		int max; // 0x20 (size: 0x4, flags: 0x21, type: 0x8)
		System::DateTime previous_collection; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
