#pragma once

#include "..\System\Reflection\Emit\TypeBuilder.h"
#include "..\System\Reflection\Emit\FieldBuilder.h"
#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class EnumBuilder : public Type // 0x18
	{
	public:
		System::Reflection::Emit::TypeBuilder* _tb; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::FieldBuilder* _underlyingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _underlyingType; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
