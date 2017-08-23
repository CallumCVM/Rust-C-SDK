#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Configuration
{
{
		namespace Provider
{
	class ProviderCollection : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* lookup; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* values; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool readOnly; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
