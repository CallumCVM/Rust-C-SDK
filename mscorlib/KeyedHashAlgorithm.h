#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class KeyedHashAlgorithm : public HashAlgorithm // 0x28
	{
	public:
		unsigned char* KeyValue; // 0x28 (size: 0x8, flags: 0x4, type: 0x1d)
	}; // size = 0x30
}
