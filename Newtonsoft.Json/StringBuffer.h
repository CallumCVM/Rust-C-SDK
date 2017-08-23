#pragma once

#include "..\System\Char.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
	class StringBuffer : public ValueType // 0x0
	{
	public:
		System::Char* _buffer; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int _position; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
