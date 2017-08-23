#pragma once

#include "..\System\Type.h"
#include "..\System\Object.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonConverterAttribute : public Attribute // 0x0
	{
	public:
		System::Type* _converterType; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Object* <ConverterParameters>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
