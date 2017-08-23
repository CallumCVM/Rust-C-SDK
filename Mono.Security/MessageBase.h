#pragma once

#include "..\Mono\Security\Protocol\Ntlm\NtlmFlags.h"

namespace Mono
{
	namespace Security
{
{
		namespace Protocol
{
{
{
			namespace Ntlm
{
	class MessageBase : public Object // 0x0
	{
	public:
		int _type; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		Mono::Security::Protocol::Ntlm::NtlmFlags _flags; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
