#pragma once

#include "..\UnityEngine\Events\UnityAction<T1,T2,T3,T4>.h"

namespace UnityEngine
{
	namespace Events
{
		template <typename T0, typename T1, typename T2, typename T3>
	class InvokableCall`4 : public BaseInvokableCall // 0x0
	{
	public:
		UnityEngine::Events::UnityAction<T1,T2,T3,T4> Delegate; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
