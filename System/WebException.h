#pragma once

#include "..\System\Net\WebResponse.h"
#include "..\System\Net\WebExceptionStatus.h"

namespace System
{
	namespace Net
{
	class WebException : public InvalidOperationException // 0x60
	{
	public:
		System::Net::WebResponse* response; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::WebExceptionStatus status; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
