#pragma once

#include "..\System\Security\Cryptography\RijndaelTransform.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RijndaelManagedTransform : public Object // 0x0
	{
	public:
		System::Security::Cryptography::RijndaelTransform* _st; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int _bs; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
