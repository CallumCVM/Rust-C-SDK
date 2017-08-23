#pragma once

#include "..\Microsoft\Win32\SafeHandles\SafePipeHandle.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class UnixNamedPipeServer : public UnixNamedPipe // 0x0
	{
	public:
		Microsoft::Win32::SafeHandles::SafePipeHandle* handle; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool should_close_handle; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
