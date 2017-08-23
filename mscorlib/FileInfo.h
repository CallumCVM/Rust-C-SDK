#pragma once

namespace System
{
	namespace IO
{
	class FileInfo : public FileSystemInfo // 0x60
	{
	public:
		bool exists; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
