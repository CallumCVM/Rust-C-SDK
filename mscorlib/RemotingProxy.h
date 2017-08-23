#pragma once

#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"
#include "..\System\Runtime\Remoting\Messaging\ConstructionCall.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Proxies
{
	class RemotingProxy : public RealProxy // 0x50
	{
	public:
		System::Runtime::Remoting::Messaging::IMessageSink* _sink; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool _hasEnvoySink; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		System::Runtime::Remoting::Messaging::ConstructionCall* _ctorCall; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
