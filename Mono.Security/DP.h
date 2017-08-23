#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\X509\Extensions\CRLDistributionPointsExtension\ReasonFlags.h"

namespace rust 
{
	class DP : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* DistributionPoint; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* CRLIssuer; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		Mono::Security::X509::Extensions::CRLDistributionPointsExtension::ReasonFlags Reasons; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
