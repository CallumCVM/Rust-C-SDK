#pragma once

namespace System
{
	namespace ComponentModel
{
	class Win32Exception : public ExternalException // 0x60
	{
	public:
		int native_error_code; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x68
}
