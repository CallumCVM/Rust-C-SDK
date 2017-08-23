#pragma once

#include "..\System\IO\Pipes\IAnonymousPipeServer.h"
#include "..\Microsoft\Win32\SafeHandles\SafePipeHandle.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class AnonymousPipeServerStream : public PipeStream // 0x50
	{
	public:
		System::IO::Pipes::IAnonymousPipeServer* impl; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Microsoft::Win32::SafeHandles::SafePipeHandle* <ClientSafePipeHandle>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
