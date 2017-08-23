#pragma once

#include "..\System\Net\Mime\ContentDisposition.h"
#include "..\System\Text\Encoding.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class Attachment : public AttachmentBase // 0x30
	{
	public:
		System::Net::Mime::ContentDisposition* contentDisposition; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* nameEncoding; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
