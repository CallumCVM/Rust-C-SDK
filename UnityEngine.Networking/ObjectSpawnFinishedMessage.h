#pragma once

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class ObjectSpawnFinishedMessage : public MessageBase // 0x0
	{
	public:
		unsigned int state; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x18
}
