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
	class Type1Message : public MessageBase // 0x18
	{
	public:
		UnityEngine::UnicodeString* _host; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _domain; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
