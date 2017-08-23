#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"
#include "..\Mono\Xml\Xsl\VariableScope.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class VariableScope : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* variableNames; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* variables; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::VariableScope* parent; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int nextSlot; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int highTide; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
