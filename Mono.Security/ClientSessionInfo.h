#pragma once

#include "..\System\DateTime.h"
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
			namespace Tls
{
	class ClientSessionInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* host; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* sid; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* masterSecret; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool disposed; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime validuntil; // 0x30 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
