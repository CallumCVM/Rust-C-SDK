#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"

namespace System
{
	namespace CodeDom
{
{
		namespace Compiler
{
	class CompilerInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Languages; // 0x10 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* Extensions; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* TypeName; // 0x20 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* CompilerOptions; // 0x28 (size: 0x8, flags: 0x3, type: 0xe)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> ProviderOptions; // 0x30 (size: 0x8, flags: 0x3, type: 0x15)
		System::Type* type; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int WarningLevel; // 0x40 (size: 0x4, flags: 0x3, type: 0x8)
		bool inited; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
