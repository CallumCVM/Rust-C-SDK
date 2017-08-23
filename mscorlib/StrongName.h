#pragma once

#include "..\System\Security\Permissions\StrongNamePublicKeyBlob.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Version.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class StrongName : public Object // 0x0
	{
	public:
		System::Security::Permissions::StrongNamePublicKeyBlob* publickey; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Version* version; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
