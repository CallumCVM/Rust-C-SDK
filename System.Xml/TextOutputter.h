#pragma once

#include "..\System\IO\TextWriter.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class TextOutputter : public Outputter // 0x0
	{
	public:
		System::IO::TextWriter* _writer; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int _depth; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		bool _ignoreNestedText; // 0x1c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
