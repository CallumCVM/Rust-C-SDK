#pragma once

#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class EnvoyInfo : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Messaging::IMessageSink* envoySinks; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
