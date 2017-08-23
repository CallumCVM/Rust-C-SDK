#pragma once

#include "..\System\IO\Stream.h"

namespace System
{
	namespace Net
{
{
		namespace Security
{
	class AuthenticatedStream : public Stream // 0x18
	{
	public:
		System::IO::Stream* innerStream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool leaveStreamOpen; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
