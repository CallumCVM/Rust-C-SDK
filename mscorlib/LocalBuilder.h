#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\Emit\ILGenerator.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class LocalBuilder : public LocalVariableInfo // 0x20
	{
	public:
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Reflection::Emit::ILGenerator* ilgen; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		int startOffset; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int endOffset; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
