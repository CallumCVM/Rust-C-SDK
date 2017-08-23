#pragma once

#include "..\UnityEngine\Networking\Types\SourceID.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Networking\Types\AppID.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class Request : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <projectId>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <accessTokenString>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		int <version>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Networking::Types::SourceID <sourceId>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Networking::Types::AppID <appId>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
		int <domain>k__BackingField; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
