#pragma once

#include "..\EasyAntiCheat\Client\LoadResult.h"

namespace EasyAntiCheat
{
	namespace Client
{
	class LoadException : public Exception // 0x60
	{
	public:
		EasyAntiCheat::Client::LoadResult <ExitCode>k__BackingField; // 0x60 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
