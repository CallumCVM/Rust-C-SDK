#pragma once

#include "..\System\IO\DriveInfo\_DriveType.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
	class DriveInfo : public Object // 0x0
	{
	public:
		System::IO::DriveInfo::_DriveType _drive_type; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* drive_format; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* path; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
