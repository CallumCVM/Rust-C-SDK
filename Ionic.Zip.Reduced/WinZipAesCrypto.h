#pragma once

#include "..\System\Int16.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Ionic
{
	namespace Zip
{
	class WinZipAesCrypto : public Object // 0x0
	{
	public:
		unsigned char* _Salt; // 0x10 (size: 0x8, flags: 0x3, type: 0x1d)
		unsigned char* _providedPv; // 0x18 (size: 0x8, flags: 0x3, type: 0x1d)
		unsigned char* _generatedPv; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
		unsigned char* _MacInitializationVector; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _StoredMac; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _keyBytes; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _Password; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* CalculatedMac; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
		int _KeyStrengthInBits; // 0x50 (size: 0x4, flags: 0x3, type: 0x8)
		System::Int16 PasswordVerificationStored; // 0x54 (size: 0x2, flags: 0x1, type: 0x6)
		System::Int16 PasswordVerificationGenerated; // 0x56 (size: 0x2, flags: 0x1, type: 0x6)
		int Rfc2898KeygenIterations; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		bool _cryptoGenerated; // 0x5c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
