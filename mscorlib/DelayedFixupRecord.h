#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class DelayedFixupRecord : public BaseFixupRecord // 0x30
	{
	public:
		UnityEngine::UnicodeString* _memberName; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x38
}
