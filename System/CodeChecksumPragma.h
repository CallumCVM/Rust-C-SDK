#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Guid.h"

namespace System
{
	namespace CodeDom
{
	class CodeChecksumPragma : public CodeDirective // 0x18
	{
	public:
		UnityEngine::UnicodeString* fileName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* checksumData; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Guid checksumAlgorithmId; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
