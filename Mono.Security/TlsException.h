#pragma once

#include "..\Mono\Security\Protocol\Tls\Alert.h"

namespace Mono
{
	namespace Security
{
{
		namespace Protocol
{
{
{
			namespace Tls
{
	class TlsException : public Exception // 0x60
	{
	public:
		Mono::Security::Protocol::Tls::Alert* alert; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
