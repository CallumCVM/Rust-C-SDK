#pragma once

#include "..\Mono\Xml\DTDObjectModel.h"

namespace Mono
{
	namespace Xml
{
	class DTDCollectionBase : public DictionaryBase // 0x20
	{
	public:
		Mono::Xml::DTDObjectModel* root; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
