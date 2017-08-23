#pragma once

#include "..\System\Collections\Generic\RBTree\Node.h"
#include "..\System\Object.h"

namespace System
{
	namespace Collections
{
{
		namespace Generic
{
	class RBTree : public Object // 0x0
	{
	public:
		System::Collections::Generic::RBTree::Node* root; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object hlp; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		unsigned int version; // 0x20 (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x28
}
