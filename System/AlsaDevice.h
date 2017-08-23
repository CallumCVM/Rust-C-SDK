#pragma once

namespace Mono
{
	namespace Audio
{
	class AlsaDevice : public AudioDevice // 0x0
	{
	public:
		__int64 handle; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x18
}
