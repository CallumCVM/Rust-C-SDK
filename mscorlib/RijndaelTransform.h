#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RijndaelTransform : public SymmetricTransform // 0x58
	{
	public:
		unsigned int* expandedKey; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		int Nb; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int Nk; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		int Nr; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
