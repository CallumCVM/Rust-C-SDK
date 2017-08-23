#pragma once

#include "..\Apex\Serialization\StageItem.h"

namespace Apex
{
	namespace Serialization
{
	class StageContainer : public StageItem // 0x28
	{
	public:
		Apex::Serialization::StageItem* _tailChild; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x30
}
