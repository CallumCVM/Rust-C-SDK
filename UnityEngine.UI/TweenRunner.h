#pragma once

#include "..\UnityEngine\MonoBehaviour.h"
#include "..\System\Collections\IEnumerator.h"

namespace UnityEngine
{
	namespace UI
{
{
		namespace CoroutineTween
{
			template <typename T0>
	class TweenRunner : public Object // 0x0
	{
	public:
		UnityEngine::MonoBehaviour* m_CoroutineContainer; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Collections::IEnumerator* m_Tween; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x20
}
