#pragma once

namespace UnityEngine
{
	namespace SocialPlatforms
{
	class Range : public ValueType // 0x0
	{
	public:
		int from; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int count; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
