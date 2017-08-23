#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Runtime\Remoting\ChannelData.h"
#include "..\System\Collections\Stack.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ConfigHandler : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* typeEntries; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* channelInstances; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::ChannelData* currentChannel; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* currentProviderData; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* currentClientUrl; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* appName; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* currentXmlPath; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		bool onlyDelayedChannels; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
