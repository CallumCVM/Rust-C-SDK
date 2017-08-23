#pragma once

#include "..\System\Char.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
	class StringReference : public ValueType // 0x0
	{
	public:
		System::Char* _chars; // 0x10 (size: 0x8, flags: 0x21, type: 0x1d)
		int _startIndex; // 0x18 (size: 0x4, flags: 0x21, type: 0x8)
		int _length; // 0x1c (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x20
}
