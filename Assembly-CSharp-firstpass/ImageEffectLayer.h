#pragma once

#include "ImageEffectRedirect.h"

namespace rust 
{
	class ImageEffectLayer : public MonoBehaviour // 0x18
	{
	public:
		ImageEffectRedirect* effects; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		bool _layerEnabled; // 0x20 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x28
}
