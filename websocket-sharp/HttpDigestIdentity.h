#pragma once

#include "..\System\Collections\Specialized\NameValueCollection.h"

namespace WebSocketSharp
{
	namespace Net
{
	class HttpDigestIdentity : public GenericIdentity // 0x20
	{
	public:
		System::Collections::Specialized::NameValueCollection* _parameters; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
