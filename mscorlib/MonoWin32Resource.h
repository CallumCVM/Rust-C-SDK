#pragma once

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class MonoWin32Resource : public ValueType // 0x0
	{
	public:
		int res_type; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int res_id; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int lang_id; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned char* data; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
