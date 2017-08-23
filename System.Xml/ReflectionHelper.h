#pragma once

#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class ReflectionHelper : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* _clrTypes; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _schemaTypes; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
