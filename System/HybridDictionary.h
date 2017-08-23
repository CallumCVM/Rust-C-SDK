#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\Specialized\ListDictionary.h"

namespace System
{
	namespace Collections
{
{
		namespace Specialized
{
	class HybridDictionary : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* hashtable; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::ListDictionary* list; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool caseInsensitive; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
