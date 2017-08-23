#pragma once

#include "..\System\Net\Mail\AlternateViewCollection.h"
#include "..\System\Net\Mail\AttachmentCollection.h"
#include "..\System\Net\Mail\MailAddressCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\Mail\MailPriority.h"
#include "..\System\Net\Mail\MailAddress.h"
#include "..\System\Net\Mail\DeliveryNotificationOptions.h"
#include "..\System\Collections\Specialized\NameValueCollection.h"
#include "..\System\Text\Encoding.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class MailMessage : public Object // 0x0
	{
	public:
		System::Net::Mail::AlternateViewCollection* alternateViews; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::AttachmentCollection* attachments; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::MailAddressCollection* bcc; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::MailAddressCollection* replyTo; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* body; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::Mail::MailAddress* sender; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::MailAddressCollection* cc; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::MailAddress* from; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::NameValueCollection* headers; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::MailAddressCollection* to; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* subject; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		System::Text::Encoding* subjectEncoding; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* bodyEncoding; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* headersEncoding; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::MailPriority priority; // 0x80 (size: 0x4, flags: 0x1, type: 0x11)
		System::Net::Mail::DeliveryNotificationOptions deliveryNotificationOptions; // 0x84 (size: 0x4, flags: 0x1, type: 0x11)
		bool isHtml; // 0x88 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x90
}
