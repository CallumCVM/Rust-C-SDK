#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace CodeDom
{
	class CodeNamespaceImportCollection : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* keys; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* data; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
