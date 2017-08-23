#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class HandleRef : public ValueType // 0x0
	{
	public:
		System::Object wrapper; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		__int64 handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x20
}
