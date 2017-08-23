#pragma once

#include "..\System\IO\Pipes\INamedPipeClient.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class NamedPipeClientStream : public PipeStream // 0x50
	{
	public:
		System::IO::Pipes::INamedPipeClient* impl; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
