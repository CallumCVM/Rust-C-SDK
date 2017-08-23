#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Globalization\CultureInfo.h"
#include "..\System\Reflection\AssemblyNameFlags.h"
#include "..\System\Configuration\Assemblies\AssemblyHashAlgorithm.h"
#include "..\System\Reflection\StrongNameKeyPair.h"
#include "..\System\Configuration\Assemblies\AssemblyVersionCompatibility.h"
#include "..\System\Version.h"
#include "..\System\Reflection\ProcessorArchitecture.h"

namespace System
{
	namespace Reflection
{
	class AssemblyName : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* codebase; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		int major; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int minor; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int build; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int revision; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		System::Globalization::CultureInfo* cultureinfo; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::AssemblyNameFlags flags; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		System::Configuration::Assemblies::AssemblyHashAlgorithm hashalg; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
		System::Reflection::StrongNameKeyPair* keypair; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* publicKey; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* keyToken; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Configuration::Assemblies::AssemblyVersionCompatibility versioncompat; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
		System::Version* version; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::ProcessorArchitecture processor_architecture; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
