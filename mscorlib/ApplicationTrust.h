#pragma once

#include "..\System\ApplicationIdentity.h"
#include "..\System\Security\Policy\PolicyStatement.h"
#include "..\System\Object.h"
#include "..\System\Collections\Generic\IList<System\Security\Policy\StrongName>.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class ApplicationTrust : public Object // 0x0
	{
	public:
		System::ApplicationIdentity* _appid; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::PolicyStatement* _defaultPolicy; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _xtranfo; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		bool _trustrun; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool _persist; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		System::Collections::Generic::IList<System::Security::Policy::StrongName> fullTrustAssemblies; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x38
}
