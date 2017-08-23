#pragma once

#include "..\System\Collections\Specialized\NameValueCollection.h"

namespace System
{
	namespace Configuration
{
	class AppSettingsReader : public Object // 0x0
	{
	public:
		System::Collections::Specialized::NameValueCollection* appSettings; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
