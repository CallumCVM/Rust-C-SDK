#pragma once

#include "..\System\Type.h"
#include "..\Newtonsoft\Json\Utilities\PrimitiveTypeCode.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
	class TypeInformation : public Object // 0x0
	{
	public:
		System::Type* <Type>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Utilities::PrimitiveTypeCode <TypeCode>k__BackingField; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
