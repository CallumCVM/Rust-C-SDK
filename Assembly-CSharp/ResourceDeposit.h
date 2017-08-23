#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class ResourceDeposit : public Object // 0x0
	{
	public:
		UnityEngine::List<ResourceDepositManager.ResourceDeposit.ResourceDepositEntry>* _resources; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		float lastSurveyTime; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 origin; // 0x1c (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
