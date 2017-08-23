#pragma once

#include "..\Ionic\Zip\SelfExtractorFlavor.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ExtractorSettings : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine::UnicodeString*>* ReferencedAssemblies; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine::UnicodeString*>* CopyThroughResources; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine::UnicodeString*>* ResourcesToCompile; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		Ionic::Zip::SelfExtractorFlavor Flavor; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
