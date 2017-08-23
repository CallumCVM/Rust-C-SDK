#pragma once

#include "..\System\Uri.h"
#include "..\System\Net\Mail\LinkedResourceCollection.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class AlternateView : public AttachmentBase // 0x30
	{
	public:
		System::Uri* baseUri; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mail::LinkedResourceCollection* linkedResources; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
