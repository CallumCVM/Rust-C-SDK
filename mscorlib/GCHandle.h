#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class GCHandle : public ValueType // 0x0
	{
	public:
		int handle; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x18
}
