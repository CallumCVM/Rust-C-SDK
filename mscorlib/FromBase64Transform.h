#pragma once

#include "..\System\Security\Cryptography\FromBase64TransformMode.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class FromBase64Transform : public Object // 0x0
	{
	public:
		System::Security::Cryptography::FromBase64TransformMode mode; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		unsigned char* accumulator; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int accPtr; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_disposed; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* lookupTable; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x30
}
