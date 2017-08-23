#pragma once

#include "..\System\Object.h"

namespace UnityEngine
{
	namespace Events
{
		template <typename T0, typename T1, typename T2, typename T3>
	class UnityEvent`4 : public UnityEventBase // 0x30
	{
	public:
		System::Object* m_InvokeArray; // 0x30 (size: 0x8, flags: 0x21, type: 0x1d)
	}; // size = 0x38
}
