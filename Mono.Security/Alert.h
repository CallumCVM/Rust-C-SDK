#pragma once

#include "..\Mono\Security\Protocol\Tls\AlertLevel.h"
#include "..\Mono\Security\Protocol\Tls\AlertDescription.h"

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
	class Alert : public Object // 0x0
	{
	public:
		Mono::Security::Protocol::Tls::AlertLevel level; // 0x10 (size: 0x1, flags: 0x1, type: 0x11)
		Mono::Security::Protocol::Tls::AlertDescription description; // 0x11 (size: 0x1, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
