#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class Capture : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* text; // 0x10 (size: 0x8, flags: 0x3, type: 0xe)
		int index; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
		int length; // 0x1c (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x20
}
