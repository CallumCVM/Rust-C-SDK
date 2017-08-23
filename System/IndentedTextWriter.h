#pragma once

#include "..\System\IO\TextWriter.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
{
		namespace Compiler
{
	class IndentedTextWriter : public TextWriter // 0x28
	{
	public:
		System::IO::TextWriter* writer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* tabString; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		int indent; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		bool newline; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
