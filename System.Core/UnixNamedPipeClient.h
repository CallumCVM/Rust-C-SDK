#pragma once

#include "..\System\IO\Pipes\NamedPipeClientStream.h"
#include "..\Microsoft\Win32\SafeHandles\SafePipeHandle.h"
#include "..\System\Action.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class UnixNamedPipeClient : public UnixNamedPipe // 0x0
	{
	public:
		System::IO::Pipes::NamedPipeClientStream* owner; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Microsoft::Win32::SafeHandles::SafePipeHandle* handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* opener; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool is_async; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
