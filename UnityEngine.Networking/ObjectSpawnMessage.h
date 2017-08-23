#pragma once

#include "..\UnityEngine\Networking\NetworkInstanceId.h"
#include "..\UnityEngine\Networking\NetworkHash128.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class ObjectSpawnMessage : public MessageBase // 0x0
	{
	public:
		unsigned char* payload; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Networking::NetworkInstanceId netId; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Networking::NetworkHash128 assetId; // 0x1c (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 position; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion rotation; // 0x38 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x48
}
