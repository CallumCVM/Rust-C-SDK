#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ChannelData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Ref; // 0x10 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* Type; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* Id; // 0x20 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* DelayLoadAsClientChannel; // 0x28 (size: 0x8, flags: 0x3, type: 0xe)
		System::Collections::ArrayList* _serverProviders; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _clientProviders; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _customProperties; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
