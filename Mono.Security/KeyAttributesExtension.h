#pragma once

#include "..\System\DateTime.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
{
{
			namespace Extensions
{
	class KeyAttributesExtension : public X509Extension // 0x28
	{
	public:
		unsigned char* keyId; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		int kubits; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		System::DateTime notBefore; // 0x38 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime notAfter; // 0x48 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
