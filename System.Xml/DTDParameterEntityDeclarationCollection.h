#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\Mono\Xml\DTDObjectModel.h"

namespace Mono
{
	namespace Xml
{
	class DTDParameterEntityDeclarationCollection : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* peDecls; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDObjectModel* root; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
