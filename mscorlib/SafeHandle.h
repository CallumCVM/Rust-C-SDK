#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class SafeHandle : public CriticalFinalizerObject // 0x0
	{
	public:
		__int64 handle; // 0x10 (size: 0x8, flags: 0x4, type: 0x18)
		__int64 invalid_handle_value; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		int refcount; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool owns_handle; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
