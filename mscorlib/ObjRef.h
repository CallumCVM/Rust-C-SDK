#pragma once

#include "..\System\Runtime\Remoting\IChannelInfo.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\Remoting\IRemotingTypeInfo.h"
#include "..\System\Runtime\Remoting\IEnvoyInfo.h"
#include "..\System\Type.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ObjRef : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::IChannelInfo* channel_info; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* uri; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::Remoting::IRemotingTypeInfo* typeInfo; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::IEnvoyInfo* envoyInfo; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int flags; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		System::Type* _serverType; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
