#pragma once

#include "..\System\Runtime\Remoting\Channels\IChannelSinkBase.h"
#include "..\System\Object.h"
#include "..\System\Runtime\Remoting\Channels\ChanelSinkStackEntry.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Channels
{
	class ChanelSinkStackEntry : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Channels::IChannelSinkBase* Sink; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Object State; // 0x18 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Runtime::Remoting::Channels::ChanelSinkStackEntry* Next; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
