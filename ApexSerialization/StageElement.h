#pragma once

#include "..\Apex\Serialization\StageItem.h"

namespace Apex
{
	namespace Serialization
{
	class StageElement : public StageContainer // 0x30
	{
	public:
		Apex::Serialization::StageItem* _tailAttribute; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
