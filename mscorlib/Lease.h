#pragma once

#include "..\System\DateTime.h"
#include "..\System\Runtime\Remoting\Lifetime\LeaseState.h"
#include "..\System\TimeSpan.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Queue.h"
#include "..\System\Runtime\Remoting\Lifetime\Lease\RenewalDelegate.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Lifetime
{
	class Lease : public MarshalByRefObject // 0x18
	{
	public:
		System::DateTime _leaseExpireTime; // 0x18 (size: 0x10, flags: 0x1, type: 0x11)
		System::Runtime::Remoting::Lifetime::LeaseState _currentState; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		System::TimeSpan _initialLeaseTime; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
		System::TimeSpan _renewOnCallTime; // 0x38 (size: 0x8, flags: 0x1, type: 0x11)
		System::TimeSpan _sponsorshipTimeout; // 0x40 (size: 0x8, flags: 0x1, type: 0x11)
		System::Collections::ArrayList* _sponsors; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Queue* _renewingSponsors; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate* _renewalDelegate; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
