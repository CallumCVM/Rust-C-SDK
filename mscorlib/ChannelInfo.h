#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ChannelInfo : public Object // 0x0
	{
	public:
		System::Object* channelData; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x18
}
