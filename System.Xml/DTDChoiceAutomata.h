#pragma once

#include "..\Mono\Xml\DTDAutomata.h"

namespace Mono
{
	namespace Xml
{
	class DTDChoiceAutomata : public DTDAutomata // 0x18
	{
	public:
		Mono::Xml::DTDAutomata* left; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDAutomata* right; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool hasComputedEmptiable; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool cachedEmptiable; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
