#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace CompilerServices
{
	class RuntimeWrappedException : public Exception // 0x60
	{
	public:
		System::Object wrapped_exception; // 0x60 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x68
}
