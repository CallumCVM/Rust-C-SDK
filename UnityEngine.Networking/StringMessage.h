#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class StringMessage : public MessageBase // 0x0
	{
	public:
		UnityEngine::UnicodeString* value; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x18
}
