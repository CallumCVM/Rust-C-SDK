#pragma once

#include "..\System\Uri.h"

namespace System
{
	namespace Net
{
{
		namespace Mail
{
	class LinkedResource : public AttachmentBase // 0x30
	{
	public:
		System::Uri* contentLink; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
