#pragma once

#include "..\System\IO\Ports\SerialData.h"

namespace System
{
	namespace IO
{
{
		namespace Ports
{
	class SerialDataReceivedEventArgs : public EventArgs // 0x0
	{
	public:
		System::IO::Ports::SerialData eventType; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
