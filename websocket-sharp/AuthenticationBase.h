#pragma once

#include "..\WebSocketSharp\Net\AuthenticationSchemes.h"
#include "..\System\Collections\Specialized\NameValueCollection.h"

namespace WebSocketSharp
{
	namespace Net
{
	class AuthenticationBase : public Object // 0x0
	{
	public:
		System::Collections::Specialized::NameValueCollection* Parameters; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		WebSocketSharp::Net::AuthenticationSchemes _scheme; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
