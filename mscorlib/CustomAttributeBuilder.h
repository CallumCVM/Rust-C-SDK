#pragma once

#include "..\System\Reflection\ConstructorInfo.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class CustomAttributeBuilder : public Object // 0x0
	{
	public:
		System::Reflection::ConstructorInfo* ctor; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* data; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
