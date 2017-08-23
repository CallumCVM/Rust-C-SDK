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
	class ChallengeResponse : public Object // 0x0
	{
	public:
		unsigned char* _challenge; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _lmpwd; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _ntpwd; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool _disposed; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
