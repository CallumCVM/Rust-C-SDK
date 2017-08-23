#pragma once

#include "..\System\Int16.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class AddPlayerMessage : public MessageBase // 0x0
	{
	public:
		unsigned char* msgData; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Int16 playerControllerId; // 0x18 (size: 0x2, flags: 0x6, type: 0x6)
		int msgSize; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
