#pragma once

#include "..\Microsoft\Win32\SafeHandles\SafePipeHandle.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class Win32NamedPipeServer : public Win32NamedPipe // 0x18
	{
	public:
		Microsoft::Win32::SafeHandles::SafePipeHandle* handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
