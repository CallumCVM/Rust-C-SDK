#pragma once

#include "..\System\Net\Mail\SmtpAccess.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class SmtpPermission : public CodeAccessPermission // 0x0
	{
	public:
		bool unrestricted; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		System::Net::Mail::SmtpAccess access; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
