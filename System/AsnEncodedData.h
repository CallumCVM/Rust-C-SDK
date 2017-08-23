#pragma once

#include "..\System\Security\Cryptography\Oid.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class AsnEncodedData : public Object // 0x0
	{
	public:
		System::Security::Cryptography::Oid* _oid; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		unsigned char* _raw; // 0x18 (size: 0x8, flags: 0x3, type: 0x1d)
	}; // size = 0x20
}
