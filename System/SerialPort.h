#pragma once

#include "..\System\IO\Ports\Parity.h"
#include "..\System\IO\Ports\StopBits.h"
#include "..\System\IO\Ports\Handshake.h"
#include "..\System\IO\Ports\ISerialStream.h"
#include "..\System\Text\Encoding.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"

namespace System
{
	namespace IO
{
{
		namespace Ports
{
	class SerialPort : public Component // 0x30
	{
	public:
		System::IO::Ports::ISerialStream* stream; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* encoding; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* new_line; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* port_name; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object error_received; // 0x50 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object data_received; // 0x58 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object pin_changed; // 0x60 (size: 0x8, flags: 0x1, type: 0x1c)
		bool is_open; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		int baud_rate; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		System::IO::Ports::Parity parity; // 0x70 (size: 0x4, flags: 0x1, type: 0x11)
		System::IO::Ports::StopBits stop_bits; // 0x74 (size: 0x4, flags: 0x1, type: 0x11)
		System::IO::Ports::Handshake handshake; // 0x78 (size: 0x4, flags: 0x1, type: 0x11)
		int data_bits; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
		bool break_state; // 0x80 (size: 0x1, flags: 0x1, type: 0x2)
		bool dtr_enable; // 0x81 (size: 0x1, flags: 0x1, type: 0x2)
		bool rts_enable; // 0x82 (size: 0x1, flags: 0x1, type: 0x2)
		int read_timeout; // 0x84 (size: 0x4, flags: 0x1, type: 0x8)
		int write_timeout; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		int readBufferSize; // 0x8c (size: 0x4, flags: 0x1, type: 0x8)
		int writeBufferSize; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x98
}
