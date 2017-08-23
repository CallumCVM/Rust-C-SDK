#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace CompilerServices
{
	class DecimalConstantAttribute : public Attribute // 0x0
	{
	public:
		unsigned char scale; // 0x10 (size: 0x1, flags: 0x1, type: 0x5)
		bool sign; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		int hi; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int mid; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int low; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
