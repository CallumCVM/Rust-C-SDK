#pragma once

#include "..\System\Security\Cryptography\CspParameters.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class KeyPairPersistence : public Object // 0x0
	{
	public:
		System::Security::Cryptography::CspParameters* _params; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _keyvalue; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _filename; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _container; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
