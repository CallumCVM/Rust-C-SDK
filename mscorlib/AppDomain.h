#pragma once

#include "..\System\Security\Policy\Evidence.h"
#include "..\System\Security\PermissionSet.h"
#include "..\System\Security\Principal\PrincipalPolicy.h"
#include "..\System\AppDomainManager.h"
#include "..\System\ActivationContext.h"
#include "..\System\ApplicationIdentity.h"
#include "..\System\AssemblyLoadEventHandler.h"
#include "..\System\ResolveEventHandler.h"
#include "..\System\EventHandler.h"
#include "..\System\UnhandledExceptionEventHandler.h"

namespace System
{
	class AppDomain : public MarshalByRefObject // 0x18
	{
	public:
		__int64 _mono_app_domain; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		System::Security::Policy::Evidence* _evidence; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* _granted; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Principal::PrincipalPolicy _principalPolicy; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		System::AppDomainManager* _domain_manager; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::ActivationContext* _activation; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::ApplicationIdentity* _applicationIdentity; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::AssemblyLoadEventHandler* AssemblyLoad; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::ResolveEventHandler* AssemblyResolve; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* DomainUnload; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* ProcessExit; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::ResolveEventHandler* ResourceResolve; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::ResolveEventHandler* TypeResolve; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::UnhandledExceptionEventHandler* UnhandledException; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::ResolveEventHandler* ReflectionOnlyAssemblyResolve; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x90
}
