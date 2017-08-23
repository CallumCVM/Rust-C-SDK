#pragma once

#include "BaseEntity.h"

namespace Rust
{
	namespace Ai
{
	class ScanForEntities : public BaseAction // 0x18
	{
	public:
		BaseEntity* Results; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
