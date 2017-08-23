#pragma once

#include "..\System\ComponentModel\ISynchronizeInvoke.h"
#include "..\System\EventHandler.h"
#include "..\System\Diagnostics\ProcessModuleCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\StreamReader.h"
#include "..\System\IO\StreamWriter.h"
#include "..\System\Diagnostics\ProcessStartInfo.h"
#include "..\System\Diagnostics\Process\AsyncModes.h"
#include "..\System\Diagnostics\Process\ProcessAsyncReader.h"
#include "..\System\Diagnostics\DataReceivedEventHandler.h"

namespace System
{
	namespace Diagnostics
{
	class Process : public Component // 0x30
	{
	public:
		System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* exited_event; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::ProcessModuleCollection* module_collection; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* process_name; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::StreamReader* error_stream; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::StreamWriter* input_stream; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::StreamReader* output_stream; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::ProcessStartInfo* start_info; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::Process::ProcessAsyncReader* async_output; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::Process::ProcessAsyncReader* async_error; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::DataReceivedEventHandler* OutputDataReceived; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::DataReceivedEventHandler* ErrorDataReceived; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 process_handle; // 0x90 (size: 0x8, flags: 0x1, type: 0x18)
		int pid; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		bool enableRaisingEvents; // 0x9c (size: 0x1, flags: 0x1, type: 0x2)
		bool already_waiting; // 0x9d (size: 0x1, flags: 0x1, type: 0x2)
		__int64 stdout_rd; // 0xa0 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 stderr_rd; // 0xa8 (size: 0x8, flags: 0x1, type: 0x18)
		System::Diagnostics::Process::AsyncModes async_mode; // 0xb0 (size: 0x4, flags: 0x1, type: 0x11)
		bool output_canceled; // 0xb4 (size: 0x1, flags: 0x1, type: 0x2)
		bool error_canceled; // 0xb5 (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0xb6 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xb8
}
