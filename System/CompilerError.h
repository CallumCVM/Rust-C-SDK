#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
{
		namespace Compiler
{
	class CompilerError : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* fileName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* errorNumber; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* errorText; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int line; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int column; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		bool isWarning; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
