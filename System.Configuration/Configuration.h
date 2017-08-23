#pragma once

#include "..\System\Configuration\Configuration.h"
#include "..\System\Collections\Hashtable.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ConfigurationSectionGroup.h"
#include "..\System\Configuration\ConfigurationLocationCollection.h"
#include "..\System\Configuration\SectionGroupInfo.h"
#include "..\System\Configuration\Internal\IConfigSystem.h"
#include "..\System\Configuration\ContextInformation.h"

namespace System
{
	namespace Configuration
{
	class Configuration : public Object // 0x0
	{
	public:
		System::Configuration::Configuration* parent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* elementData; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* streamName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigurationSectionGroup* rootSectionGroup; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationLocationCollection* locations; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SectionGroupInfo* rootGroup; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::Internal::IConfigSystem* system; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* rootNamespace; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* configPath; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* locationConfigPath; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* locationSubPath; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ContextInformation* evaluationContext; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		bool hasFile; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x78
}
