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
{
{
{
				namespace Handshake
{
{
{
{
{
					namespace Server
{
	class TlsServerHello : public HandshakeMessage // 0x48
	{
	public:
		unsigned char* random; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		int unixTime; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
