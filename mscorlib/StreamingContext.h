#pragma once

#include "..\System\Runtime\Serialization\StreamingContextStates.h"
#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class StreamingContext : public ValueType // 0x0
	{
	public:
		System::Runtime::Serialization::StreamingContextStates state; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Object additional; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x20
}
