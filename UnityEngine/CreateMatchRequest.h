#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class CreateMatchRequest : public Request // 0x40
	{
	public:
		UnityEngine::UnicodeString* <name>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <publicAddress>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <privateAddress>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <password>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,__int64> <matchAttributes>k__BackingField; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		unsigned int <size>k__BackingField; // 0x68 (size: 0x4, flags: 0x1, type: 0x9)
		int <eloScore>k__BackingField; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		bool <advertise>k__BackingField; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x78
}
