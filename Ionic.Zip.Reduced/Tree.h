#pragma once

#include "..\System\Int16.h"
#include "..\Ionic\Zlib\StaticTree.h"

namespace Ionic
{
	namespace Zlib
{
	class Tree : public Object // 0x0
	{
	public:
		System::Int16* dyn_tree; // 0x10 (size: 0x8, flags: 0x3, type: 0x1d)
		Ionic::Zlib::StaticTree* staticTree; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		int max_code; // 0x20 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x28
}
