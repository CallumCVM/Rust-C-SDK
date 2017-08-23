#pragma once

#include "..\UnityEngine\Networking\NetworkSystem\CRCMessageEntry.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class CRCMessage : public MessageBase // 0x0
	{
	public:
		UnityEngine::Networking::NetworkSystem::CRCMessageEntry* scripts; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x18
}
