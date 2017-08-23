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
			namespace Ntlm
{
	class Type2Message : public MessageBase // 0x18
	{
	public:
		unsigned char* _nonce; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
