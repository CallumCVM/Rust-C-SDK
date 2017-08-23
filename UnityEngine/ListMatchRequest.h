#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class ListMatchRequest : public Request // 0x40
	{
	public:
		UnityEngine::UnicodeString* <nameFilter>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,__int64> <matchAttributeFilterLessThan>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,__int64> <matchAttributeFilterEqualTo>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,__int64> <matchAttributeFilterGreaterThan>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		int <pageSize>k__BackingField; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int <pageNum>k__BackingField; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		bool <filterOutPrivateMatches>k__BackingField; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		int <eloScore>k__BackingField; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		bool includePasswordMatches; // 0x70 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x78
}
