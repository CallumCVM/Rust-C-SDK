#pragma once

namespace Mono
{
	namespace Audio
{
	class AudioData : public Object // 0x0
	{
	public:
		bool stopped; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
