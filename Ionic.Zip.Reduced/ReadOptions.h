#pragma once

#include "..\System\EventHandler<Ionic\Zip\ReadProgressEventArgs>.h"
#include "..\System\IO\TextWriter.h"
#include "..\System\Text\Encoding.h"

namespace Ionic
{
	namespace Zip
{
	class ReadOptions : public Object // 0x0
	{
	public:
		System::EventHandler<Ionic::Zip::ReadProgressEventArgs> <ReadProgress>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::IO::TextWriter* <StatusMessageWriter>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* <Encoding>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
