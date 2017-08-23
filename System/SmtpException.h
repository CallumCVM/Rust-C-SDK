#pragma once

#include "..\System\Net\Mail\SmtpStatusCode.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class SmtpException : public Exception // 0x60
	{
	public:
		System::Net::Mail::SmtpStatusCode statusCode; // 0x60 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
