#pragma once

#include "..\UnityEngine\List.h"

namespace Apex
{
	namespace AI
{
		template <typename T0>
	class ActionWithOptions : public Object // 0x0
	{
	public:
		UnityEngine::List<Apex.AI.IOptionScorer<TOption>>* _scorers; // 0x10 (size: 0x8, flags: 0x4, type: 0x15)
	}; // size = 0x18
}
