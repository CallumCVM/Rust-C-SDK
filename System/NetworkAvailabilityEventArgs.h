#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class NetworkAvailabilityEventArgs : public EventArgs // 0x0
	{
	public:
		bool available; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
