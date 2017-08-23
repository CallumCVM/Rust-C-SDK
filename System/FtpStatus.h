#pragma once

#include "..\System\Net\FtpStatusCode.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
	class FtpStatus : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* statusDescription; // 0x10 (size: 0x8, flags: 0x21, type: 0xe)
		System::Net::FtpStatusCode statusCode; // 0x18 (size: 0x4, flags: 0x21, type: 0x11)
	}; // size = 0x20
}
