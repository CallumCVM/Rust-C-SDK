#pragma once

#include "..\System\Net\Mail\SmtpFailedRecipientException.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class SmtpFailedRecipientsException : public SmtpFailedRecipientException // 0x70
	{
	public:
		System::Net::Mail::SmtpFailedRecipientException* innerExceptions; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x78
}
