#pragma once

#include "..\Mono\Xml\DTDAutomata.h"

namespace Mono
{
	namespace Xml
{
	class DTDOneOrMoreAutomata : public DTDAutomata // 0x18
	{
	public:
		Mono::Xml::DTDAutomata* children; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
