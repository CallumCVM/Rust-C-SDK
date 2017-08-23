#pragma once

namespace System
{
	namespace Resources
{
	class Win32EncodedResource : public Win32Resource // 0x28
	{
	public:
		unsigned char* data; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x30
}
