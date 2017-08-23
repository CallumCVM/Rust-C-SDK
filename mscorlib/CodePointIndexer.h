#pragma once

#include "..\Mono\Globalization\Unicode\CodePointIndexer\TableRange.h"

namespace Mono
{
	namespace Globalization
{
{
		namespace Unicode
{
	class CodePointIndexer : public Object // 0x0
	{
	public:
		Mono::Globalization::Unicode::CodePointIndexer::TableRange* ranges; // 0x10 (size: 0x8, flags: 0x21, type: 0x1d)
		int TotalCount; // 0x18 (size: 0x4, flags: 0x26, type: 0x8)
		int defaultIndex; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int defaultCP; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
