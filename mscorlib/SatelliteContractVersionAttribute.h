#pragma once

#include "..\System\Version.h"

namespace System
{
	namespace Resources
{
	class SatelliteContractVersionAttribute : public Attribute // 0x0
	{
	public:
		System::Version* ver; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
