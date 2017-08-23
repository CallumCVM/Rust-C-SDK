#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class DataMemberAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool is_required; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool emit_default; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
		int order; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
