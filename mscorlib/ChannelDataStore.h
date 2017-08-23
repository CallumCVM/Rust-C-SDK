#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\DictionaryEntry.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Channels
{
	class ChannelDataStore : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString** _channelURIs; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::DictionaryEntry* _extraData; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
