#pragma once

#include "..\System\Type.h"
#include "..\System\MarshalByRefObject.h"
#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"
#include "..\System\Runtime\Remoting\Contexts\Context.h"
#include "..\System\Runtime\Remoting\Lifetime\Lease.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ServerIdentity : public Identity // 0x48
	{
	public:
		System::Type* _objectType; // 0x48 (size: 0x8, flags: 0x4, type: 0x12)
		System::MarshalByRefObject* _serverObject; // 0x50 (size: 0x8, flags: 0x4, type: 0x12)
		System::Runtime::Remoting::Messaging::IMessageSink* _serverSink; // 0x58 (size: 0x8, flags: 0x4, type: 0x12)
		System::Runtime::Remoting::Contexts::Context* _context; // 0x60 (size: 0x8, flags: 0x4, type: 0x12)
		System::Runtime::Remoting::Lifetime::Lease* _lease; // 0x68 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x70
}
