#pragma once

#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class ComponentRenameEventArgs : public EventArgs // 0x0
	{
	public:
		System::Object component; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* oldName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* newName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
