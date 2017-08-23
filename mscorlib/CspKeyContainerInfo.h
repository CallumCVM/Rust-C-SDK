#pragma once

#include "..\System\Security\Cryptography\CspParameters.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class CspKeyContainerInfo : public Object // 0x0
	{
	public:
		System::Security::Cryptography::CspParameters* _params; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool _random; // 0x18 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x20
}
