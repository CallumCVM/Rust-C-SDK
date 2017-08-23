#pragma once

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class RxLinkRef : public LinkRef // 0x0
	{
	public:
		int* offsets; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		int current; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
