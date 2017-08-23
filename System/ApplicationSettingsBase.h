#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\SettingsContext.h"
#include "..\System\Configuration\SettingsPropertyCollection.h"
#include "..\System\Configuration\ISettingsProviderService.h"
#include "..\System\Configuration\SettingsPropertyValueCollection.h"
#include "..\System\Configuration\SettingsProviderCollection.h"
#include "..\System\ComponentModel\PropertyChangedEventHandler.h"
#include "..\System\Configuration\SettingChangingEventHandler.h"
#include "..\System\Configuration\SettingsLoadedEventHandler.h"
#include "..\System\Configuration\SettingsSavingEventHandler.h"

namespace System
{
	namespace Configuration
{
	class ApplicationSettingsBase : public SettingsBase // 0x38
	{
	public:
		UnityEngine::UnicodeString* settingsKey; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::SettingsContext* context; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsPropertyCollection* properties; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ISettingsProviderService* providerService; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsPropertyValueCollection* propertyValues; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsProviderCollection* providers; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingChangingEventHandler* SettingChanging; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsLoadedEventHandler* SettingsLoaded; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsSavingEventHandler* SettingsSaving; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x88
}
