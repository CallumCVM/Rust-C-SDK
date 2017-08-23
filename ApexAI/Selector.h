#pragma once

#include "..\System\Guid.h"
#include "..\UnityEngine\List.h"
#include "..\Apex\AI\IDefaultQualifier.h"

namespace Apex
{
	namespace AI
{
	class Selector : public Object // 0x0
	{
	public:
		UnityEngine::List<Apex.AI.IQualifier>* _qualifiers; // 0x10 (size: 0x8, flags: 0x4, type: 0x15)
		Apex::AI::IDefaultQualifier* _defaultQualifier; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		System::Guid _id; // 0x20 (size: 0x10, flags: 0x4, type: 0x11)
	}; // size = 0x30
}
