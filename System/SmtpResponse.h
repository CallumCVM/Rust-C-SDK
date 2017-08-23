#pragma once

#include "..\System\Net\Mail\SmtpStatusCode.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class SmtpResponse : public ValueType // 0x0
	{
	public:
		System::Net::Mail::SmtpStatusCode StatusCode; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* Description; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
