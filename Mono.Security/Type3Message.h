#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Security
{
{
		namespace Protocol
{
{
{
			namespace Ntlm
{
	class Type3Message : public MessageBase // 0x18
	{
	public:
		unsigned char* _challenge; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _host; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _domain; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _username; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _password; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* _lm; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _nt; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x50
}
