#pragma once

#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"
#include "..\System\Runtime\Remoting\ServerIdentity.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Messaging
{
	class ServerObjectReplySink : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Messaging::IMessageSink* _replySink; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::ServerIdentity* _identity; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
