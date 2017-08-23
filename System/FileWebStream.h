#pragma once

#include "..\System\Net\FileWebRequest.h"

namespace rust 
{
	class FileWebStream : public FileStream // 0x68
	{
	public:
		System::Net::FileWebRequest* webRequest; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x70
}
