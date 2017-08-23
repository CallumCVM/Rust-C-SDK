#pragma once

#include "..\System\IO\Pipes\INamedPipeServer.h"
#include "..\System\Action.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class NamedPipeServerStream : public PipeStream // 0x50
	{
	public:
		System::IO::Pipes::INamedPipeServer* impl; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* wait_connect_delegate; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
