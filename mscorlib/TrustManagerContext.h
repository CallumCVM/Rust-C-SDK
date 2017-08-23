#pragma once

#include "..\System\ApplicationIdentity.h"
#include "..\System\Security\Policy\TrustManagerUIContext.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class TrustManagerContext : public Object // 0x0
	{
	public:
		bool _ignorePersistedDecision; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool _noPrompt; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		bool _keepAlive; // 0x12 (size: 0x1, flags: 0x1, type: 0x2)
		bool _persist; // 0x13 (size: 0x1, flags: 0x1, type: 0x2)
		System::ApplicationIdentity* _previousId; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::TrustManagerUIContext _ui; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
