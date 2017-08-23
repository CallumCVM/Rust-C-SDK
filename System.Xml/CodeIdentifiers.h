#pragma once

#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class CodeIdentifiers : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* table; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* reserved; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool useCamelCasing; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
