#pragma once

#include "..\System\Runtime\InteropServices\CharSet.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class DefaultCharSetAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::InteropServices::CharSet _set; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
