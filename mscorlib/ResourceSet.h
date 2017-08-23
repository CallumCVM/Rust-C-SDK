#pragma once

#include "..\System\Resources\IResourceReader.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Resources
{
	class ResourceSet : public Object // 0x0
	{
	public:
		System::Resources::IResourceReader* Reader; // 0x10 (size: 0x8, flags: 0x84, type: 0x12)
		System::Collections::Hashtable* Table; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		bool resources_read; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0x21 (size: 0x1, flags: 0x81, type: 0x2)
	}; // size = 0x28
}
