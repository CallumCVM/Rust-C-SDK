#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Microsoft
{
	namespace VisualBasic
{
	class VBCodeGenerator : public CodeGenerator // 0x38
	{
	public:
		UnityEngine::UnicodeString** Keywords; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x40
}
