#pragma once

#include "..\System\IO\Ports\SerialPinChange.h"

namespace System
{
	namespace IO
{
{
		namespace Ports
{
	class SerialPinChangedEventArgs : public EventArgs // 0x0
	{
	public:
		System::IO::Ports::SerialPinChange eventType; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
