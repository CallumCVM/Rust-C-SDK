#pragma once

#include "..\System\IO\Pipes\PipeDirection.h"
#include "..\System\IO\Pipes\PipeTransmissionMode.h"
#include "..\Microsoft\Win32\SafeHandles\SafePipeHandle.h"
#include "..\System\IO\Stream.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class PipeStream : public Stream // 0x18
	{
	public:
		Microsoft::Win32::SafeHandles::SafePipeHandle* handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* stream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System.Func<unsigned char[],int,int,int> read_delegate; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		System.Action<unsigned char[],int,int> write_delegate; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System::IO::Pipes::PipeDirection direction; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		System::IO::Pipes::PipeTransmissionMode transmission_mode; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
		System::IO::Pipes::PipeTransmissionMode read_trans_mode; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		int buffer_size; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		bool <IsAsync>k__BackingField; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsConnected>k__BackingField; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsHandleExposed>k__BackingField; // 0x4a (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsMessageComplete>k__BackingField; // 0x4b (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
