#pragma once

#include "..\System\IO\Pipes\NamedPipeClientStream.h"
#include "..\System\Func<Microsoft\Win32\SafeHandles\SafePipeHandle>.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Microsoft\Win32\SafeHandles\SafePipeHandle.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class Win32NamedPipeClient : public Win32NamedPipe // 0x18
	{
	public:
		System::IO::Pipes::NamedPipeClientStream* owner; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Func<Microsoft::Win32::SafeHandles::SafePipeHandle> opener; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		Microsoft::Win32::SafeHandles::SafePipeHandle* handle; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool is_async; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
