#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Analytics\TrackableProperty.h"
#include "..\UnityEngine\Analytics\AnalyticsTracker\Trigger.h"

namespace UnityEngine
{
	namespace Analytics
{
	class AnalyticsTracker : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* m_EventName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,System.Object> m_Dict; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Analytics::TrackableProperty* m_TrackableProperty; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int m_PrevDictHash; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Analytics::AnalyticsTracker::Trigger m_Trigger; // 0x34 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x38
}
