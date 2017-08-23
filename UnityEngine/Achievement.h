#pragma once

#include "..\System\DateTime.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace SocialPlatforms
{
{
		namespace Impl
{
	class Achievement : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <id>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool m_Completed; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_Hidden; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime m_LastReportedDate; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
		double <percentCompleted>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0xd)
	}; // size = 0x38
}
