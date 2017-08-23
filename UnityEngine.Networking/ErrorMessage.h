#pragma once

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class ErrorMessage : public MessageBase // 0x0
	{
	public:
		int errorCode; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
