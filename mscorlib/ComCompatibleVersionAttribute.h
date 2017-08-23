#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class ComCompatibleVersionAttribute : public Attribute // 0x0
	{
	public:
		int major; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int minor; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int build; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int revision; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
