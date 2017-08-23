#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\Mime\ContentType.h"
#include "..\System\IO\Stream.h"
#include "..\System\Net\Mime\TransferEncoding.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class AttachmentBase : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* id; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::Mime::ContentType* contentType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* contentStream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mime::TransferEncoding transferEncoding; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
