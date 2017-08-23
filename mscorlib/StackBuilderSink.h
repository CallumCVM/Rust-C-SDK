#pragma once

#include "..\System\MarshalByRefObject.h"
#include "..\System\Runtime\Remoting\Proxies\RealProxy.h"

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
	class StackBuilderSink : public Object // 0x0
	{
	public:
		System::MarshalByRefObject* _target; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Proxies::RealProxy* _rp; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
