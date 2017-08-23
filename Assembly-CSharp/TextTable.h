#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Text\StringBuilder.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class TextTable : public Object // 0x0
	{
	public:
		UnityEngine::List<TextTable.Row>* rows; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<TextTable.Column>* columns; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Text::StringBuilder* builder; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* text; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool dirty; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
