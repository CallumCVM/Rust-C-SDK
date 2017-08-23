#pragma once

#include "..\System\Exception.h"
#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
	class ReflectionTypeLoadException : public SystemException // 0x60
	{
	public:
		System::Exception* loaderExceptions; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* types; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x70
}
