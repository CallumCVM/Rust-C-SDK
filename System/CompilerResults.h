#pragma once

#include "..\System\Reflection\Assembly.h"
#include "..\System\CodeDom\Compiler\CompilerErrorCollection.h"
#include "..\System\Security\Policy\Evidence.h"
#include "..\System\Collections\Specialized\StringCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\Compiler\TempFileCollection.h"

namespace System
{
	namespace CodeDom
{
{
		namespace Compiler
{
	class CompilerResults : public Object // 0x0
	{
	public:
		System::Reflection::Assembly* compiledAssembly; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::Compiler::CompilerErrorCollection* errors; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::Evidence* evidence; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::StringCollection* output; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* pathToAssembly; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::Compiler::TempFileCollection* tempFiles; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int nativeCompilerReturnValue; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
