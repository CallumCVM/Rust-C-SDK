#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\AsyncOperation.h"

namespace rust 
{
	class Operation : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* path; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::AsyncOperation* request; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
