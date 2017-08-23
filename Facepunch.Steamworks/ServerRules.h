#pragma once

#include "..\System\Runtime\InteropServices\GCHandle.h"
#include "..\Facepunch\Steamworks\ServerList\Server.h"

namespace Facepunch
{
	namespace Steamworks
{
{
		namespace Interop
{
	class ServerRules : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::ServerList::Server* Server; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::InteropServices::GCHandle vTablePin; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		__int64 vTablePtr; // 0x20 (size: 0x8, flags: 0x1, type: 0x18)
		System::Runtime::InteropServices::GCHandle RulesRespondPin; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::InteropServices::GCHandle FailedRespondPin; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::InteropServices::GCHandle CompletePin; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
