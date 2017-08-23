#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Windows
{
{
		namespace Speech
{
	class SemanticMeaning : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* key; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString** values; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
