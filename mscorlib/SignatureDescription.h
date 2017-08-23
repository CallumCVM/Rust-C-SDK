#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class SignatureDescription : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _DeformatterAlgorithm; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _DigestAlgorithm; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _FormatterAlgorithm; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _KeyAlgorithm; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
