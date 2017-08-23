#pragma once

#include "..\System\Collections\Hashtable.h"

namespace I18N
{
	namespace Common
{
	class Manager : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* handlers; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* active; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* assemblies; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
