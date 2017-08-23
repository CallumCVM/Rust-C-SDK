#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"
#include "..\System\ComponentModel\Design\DesignerOptionService\DesignerOptionCollection.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\ComponentModel\Design\DesignerOptionService.h"

namespace rust 
{
	class DesignerOptionCollection : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object _propertiesProvider; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::ComponentModel::Design::DesignerOptionService::DesignerOptionCollection* _parent; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _children; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::Design::DesignerOptionService* _optionService; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
