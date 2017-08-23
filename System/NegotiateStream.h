#pragma once

namespace System
{
	namespace Net
{
{
		namespace Security
{
	class NegotiateStream : public AuthenticatedStream // 0x28
	{
	public:
		int readTimeout; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int writeTimeout; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
