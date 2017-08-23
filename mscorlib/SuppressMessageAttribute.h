#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
{
		namespace CodeAnalysis
{
	class SuppressMessageAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* category; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* checkId; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* justification; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* messageId; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* scope; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* target; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x40
}
