#pragma once

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class StrongNamePublicKeyBlob : public Object // 0x0
	{
	public:
		unsigned char* pubkey; // 0x10 (size: 0x8, flags: 0x3, type: 0x1d)
	}; // size = 0x18
}
