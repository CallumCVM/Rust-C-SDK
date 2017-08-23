#pragma once

#include "..\System\Net\NetworkInformation\PingReply.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class PingCompletedEventArgs : public AsyncCompletedEventArgs // 0x28
	{
	public:
		System::Net::NetworkInformation::PingReply* reply; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
