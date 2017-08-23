#pragma once

#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class UnreferencedObjectEventArgs : public EventArgs // 0x0
	{
	public:
		System::Object unreferencedObject; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* unreferencedId; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
