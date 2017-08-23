#pragma once

namespace System
{
	namespace Security
{
	class RuntimeDeclSecurityEntry : public ValueType // 0x0
	{
	public:
		__int64 blob; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		int size; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int index; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
