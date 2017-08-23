#pragma once

#include "..\Microsoft\Win32\SafeHandles\SafePipeHandle.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class Win32AnonymousPipeServer : public Win32AnonymousPipe // 0x0
	{
	public:
		Microsoft::Win32::SafeHandles::SafePipeHandle* server_handle; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Microsoft::Win32::SafeHandles::SafePipeHandle* client_handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
