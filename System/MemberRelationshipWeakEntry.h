#pragma once

#include "..\System\WeakReference.h"
#include "..\System\ComponentModel\MemberDescriptor.h"

namespace rust 
{
	class MemberRelationshipWeakEntry : public Object // 0x0
	{
	public:
		System::WeakReference* _ownerWeakRef; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::MemberDescriptor* _member; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
