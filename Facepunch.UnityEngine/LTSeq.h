#pragma once

#include "LTSeq.h"
#include "LTDescr.h"

namespace rust 
{
	class LTSeq : public Object // 0x0
	{
	public:
		LTSeq* previous; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		LTSeq* current; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		LTDescr* tween; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		float totalDelay; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float timeScale; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		int debugIter; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned int counter; // 0x34 (size: 0x4, flags: 0x6, type: 0x9)
		bool toggle; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		unsigned int _id; // 0x3c (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x40
}