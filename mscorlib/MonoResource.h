#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\ResourceAttributes.h"
#include "..\System\IO\Stream.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class MonoResource : public ValueType // 0x0
	{
	public:
		unsigned char* data; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* filename; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		System::Reflection::ResourceAttributes attrs; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		int offset; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		System::IO::Stream* stream; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
