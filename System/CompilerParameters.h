#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Policy\Evidence.h"
#include "..\System\Collections\Specialized\StringCollection.h"
#include "..\System\CodeDom\Compiler\TempFileCollection.h"

namespace System
{
	namespace CodeDom
{
{
		namespace Compiler
{
	class CompilerParameters : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* compilerOptions; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Policy::Evidence* evidence; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* mainClass; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* outputAssembly; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Specialized::StringCollection* referencedAssemblies; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::Compiler::TempFileCollection* tempFiles; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* win32Resource; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Specialized::StringCollection* embedded_resources; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::StringCollection* linked_resources; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool generateExecutable; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		bool generateInMemory; // 0x59 (size: 0x1, flags: 0x1, type: 0x2)
		bool includeDebugInformation; // 0x5a (size: 0x1, flags: 0x1, type: 0x2)
		bool treatWarningsAsErrors; // 0x5b (size: 0x1, flags: 0x1, type: 0x2)
		__int64 userToken; // 0x60 (size: 0x8, flags: 0x1, type: 0x18)
		int warningLevel; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
