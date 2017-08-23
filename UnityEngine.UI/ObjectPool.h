#pragma once

#include "..\System\Collections\Generic\Stack<T>.h"
#include "..\UnityEngine\Events\UnityAction<T>.h"

namespace UnityEngine
{
	namespace UI
{
		template <typename T0>
	class ObjectPool : public Object // 0x0
	{
	public:
		System::Collections::Generic::Stack<T> m_Stack; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::Events::UnityAction<T> m_ActionOnGet; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::Events::UnityAction<T> m_ActionOnRelease; // 0x20 (size: 0x8, flags: 0x21, type: 0x15)
		int <countAll>k__BackingField; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
