#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\LoaderOptimization.h"
#include "..\System\Runtime\Hosting\ActivationArguments.h"
#include "..\System\AppDomainInitializer.h"
#include "..\System\Security\Policy\ApplicationTrust.h"
#include "..\System\Security\SecurityElement.h"

namespace System
{
	class AppDomainSetup : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* application_base; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* application_name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* cache_path; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* configuration_file; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* dynamic_base; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* license_file; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* private_bin_path; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* private_bin_path_probe; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* shadow_copy_directories; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* shadow_copy_files; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		bool publisher_policy; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
		bool path_changed; // 0x61 (size: 0x1, flags: 0x1, type: 0x2)
		System::LoaderOptimization loader_optimization; // 0x64 (size: 0x4, flags: 0x1, type: 0x11)
		bool disallow_binding_redirects; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool disallow_code_downloads; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
		System::Runtime::Hosting::ActivationArguments* _activationArguments; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::AppDomainInitializer* domain_initializer; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::ApplicationTrust* application_trust; // 0x80 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::UnicodeString** domain_initializer_args; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Security::SecurityElement* application_trust_xml; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		bool disallow_appbase_probe; // 0x98 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* configuration_bytes; // 0xa0 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0xa8
}
