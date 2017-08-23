#pragma once

#include "..\System\Security\AccessControl\CryptoKeyRights.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class CryptoKeyAccessRule : public AccessRule // 0x30
	{
	public:
		System::Security::AccessControl::CryptoKeyRights rights; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
