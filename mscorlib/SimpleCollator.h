#pragma once

#include "..\System\Globalization\TextInfo.h"
#include "..\Mono\Globalization\Unicode\CodePointIndexer.h"
#include "..\Mono\Globalization\Unicode\Contraction.h"
#include "..\Mono\Globalization\Unicode\Level2Map.h"

namespace Mono
{
	namespace Globalization
{
{
		namespace Unicode
{
	class SimpleCollator : public Object // 0x0
	{
	public:
		System::Globalization::TextInfo* textInfo; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		bool frenchSort; // 0x18 (size: 0x1, flags: 0x21, type: 0x2)
		unsigned char* cjkCatTable; // 0x20 (size: 0x8, flags: 0x21, type: 0xf)
		unsigned char* cjkLv1Table; // 0x28 (size: 0x8, flags: 0x21, type: 0xf)
		Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer; // 0x30 (size: 0x8, flags: 0x21, type: 0x12)
		unsigned char* cjkLv2Table; // 0x38 (size: 0x8, flags: 0x21, type: 0xf)
		Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer; // 0x40 (size: 0x8, flags: 0x21, type: 0x12)
		int lcid; // 0x48 (size: 0x4, flags: 0x21, type: 0x8)
		Mono::Globalization::Unicode::Contraction* contractions; // 0x50 (size: 0x8, flags: 0x21, type: 0x1d)
		Mono::Globalization::Unicode::Level2Map* level2Maps; // 0x58 (size: 0x8, flags: 0x21, type: 0x1d)
		unsigned char* unsafeFlags; // 0x60 (size: 0x8, flags: 0x21, type: 0x1d)
	}; // size = 0x68
}
