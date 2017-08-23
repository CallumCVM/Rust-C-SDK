#pragma once

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
	class SslCipherSuite : public CipherSuite // 0x78
	{
	public:
		unsigned char* pad1; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* pad2; // 0x80 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* header; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x90
}
