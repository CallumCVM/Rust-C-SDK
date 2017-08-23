#pragma once

#include "..\System\Object.h"

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
	class TlsCipherSuite : public CipherSuite // 0x78
	{
	public:
		unsigned char* header; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object headerLock; // 0x80 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x88
}
