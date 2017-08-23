#pragma once

#include "..\System\IO\Compression\DeflateStream.h"

namespace System
{
	namespace IO
{
{
		namespace Compression
{
	class GZipStream : public Stream // 0x18
	{
	public:
		System::IO::Compression::DeflateStream* deflateStream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
