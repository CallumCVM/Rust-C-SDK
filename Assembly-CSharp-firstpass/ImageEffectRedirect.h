#pragma once

#include "IImageEffect.h"

namespace rust 
{
	class ImageEffectRedirect : public MonoBehaviour // 0x18
	{
	public:
		IImageEffect* target; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
	}; // size = 0x20
}
