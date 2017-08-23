#pragma once

#include "..\Ionic\Zlib\InflateManager\InflateManagerMode.h"
#include "..\Ionic\Zlib\ZlibCodec.h"
#include "..\Ionic\Zlib\InflateBlocks.h"

namespace Ionic
{
	namespace Zlib
{
	class InflateManager : public Object // 0x0
	{
	public:
		Ionic::Zlib::ZlibCodec* _codec; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		Ionic::Zlib::InflateBlocks* blocks; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		Ionic::Zlib::InflateManager::InflateManagerMode mode; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		int method; // 0x24 (size: 0x4, flags: 0x3, type: 0x8)
		unsigned int computedCheck; // 0x28 (size: 0x4, flags: 0x3, type: 0x9)
		unsigned int expectedCheck; // 0x2c (size: 0x4, flags: 0x3, type: 0x9)
		int marker; // 0x30 (size: 0x4, flags: 0x3, type: 0x8)
		bool _handleRfc1950HeaderBytes; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
		int wbits; // 0x38 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x40
}
