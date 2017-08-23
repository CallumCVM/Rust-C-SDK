#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class SmtpFailedRecipientException : public SmtpException // 0x68
	{
	public:
		UnityEngine::UnicodeString* failedRecipient; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x70
}
