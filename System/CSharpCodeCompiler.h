#pragma once

#include "..\System\Threading\Mutex.h"
#include "..\System\Collections\Specialized\StringCollection.h"

namespace Mono
{
	namespace CSharp
{
	class CSharpCodeCompiler : public CSharpCodeGenerator // 0x48
	{
	public:
		System::Threading::Mutex* mcsOutMutex; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::StringCollection* mcsOutput; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
