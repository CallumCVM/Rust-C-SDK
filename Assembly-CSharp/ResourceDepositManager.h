#pragma once

#include "..\System\Collections\Generic\Dictionary<Vector2i,ResourceDepositManager\ResourceDeposit>.h"

namespace rust 
{
	class ResourceDepositManager : public BaseEntity // 0x130
	{
	public:
		System::Collections::Generic::Dictionary<Vector2i,ResourceDepositManager::ResourceDeposit> _deposits; // 0x130 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x138
}
