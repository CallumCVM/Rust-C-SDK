#pragma once

#include "..\UnityEngine\ILogHandler.h"
#include "..\UnityEngine\LogType.h"

namespace UnityEngine
{
	class Logger : public Object // 0x0
	{
	public:
		UnityEngine::ILogHandler* <logHandler>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool <logEnabled>k__BackingField; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::LogType <filterLogType>k__BackingField; // 0x1c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
