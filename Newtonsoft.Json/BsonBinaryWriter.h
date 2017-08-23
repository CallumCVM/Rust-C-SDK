#pragma once

#include "..\System\IO\BinaryWriter.h"
#include "..\System\DateTimeKind.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Bson
{
	class BsonBinaryWriter : public Object // 0x0
	{
	public:
		System::IO::BinaryWriter* _writer; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		unsigned char* _largeByteBuffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::DateTimeKind <DateTimeKindHandling>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
