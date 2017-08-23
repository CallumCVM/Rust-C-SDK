#pragma once

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class RxCompiler : public Object // 0x0
	{
	public:
		unsigned char* program; // 0x10 (size: 0x8, flags: 0x4, type: 0x1d)
		int curpos; // 0x18 (size: 0x4, flags: 0x4, type: 0x8)
	}; // size = 0x20
}
