#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class CriticalHandle : public CriticalFinalizerObject // 0x0
	{
	public:
		__int64 handle; // 0x10 (size: 0x8, flags: 0x4, type: 0x18)
		bool _disposed; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
