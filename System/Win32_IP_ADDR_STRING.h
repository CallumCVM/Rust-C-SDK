#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_IP_ADDR_STRING : public ValueType // 0x0
	{
	public:
		__int64 Next; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		UnityEngine::UnicodeString* IpAddress; // 0x18 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* IpMask; // 0x20 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned int Context; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x30
}
