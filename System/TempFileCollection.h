#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Random.h"

namespace System
{
	namespace CodeDom
{
{
		namespace Compiler
{
	class TempFileCollection : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* filehash; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* tempdir; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* basepath; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Random* rnd; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* ownTempDir; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		bool keepfiles; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
