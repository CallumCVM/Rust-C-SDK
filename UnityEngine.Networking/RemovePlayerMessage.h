#pragma once

#include "..\System\Int16.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class RemovePlayerMessage : public MessageBase // 0x0
	{
	public:
		System::Int16 playerControllerId; // 0x10 (size: 0x2, flags: 0x6, type: 0x6)
	}; // size = 0x18
}
