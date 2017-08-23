#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class DerivedType : public Type // 0x18
	{
	public:
		System::Type* elementType; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x20
}
