#pragma once

#include "..\System\Collections\ArrayList.h"

namespace Mono
{
	namespace Security
{
	class ASN1 : public Object // 0x0
	{
	public:
		unsigned char m_nTag; // 0x10 (size: 0x1, flags: 0x1, type: 0x5)
		unsigned char* m_aValue; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* elist; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
