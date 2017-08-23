#pragma once

#include "..\System\Security\Cryptography\OidCollection.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class OidEnumerator : public Object // 0x0
	{
	public:
		System::Security::Cryptography::OidCollection* _collection; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int _position; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
