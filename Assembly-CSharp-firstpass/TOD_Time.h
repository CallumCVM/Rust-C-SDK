#pragma once

#include "..\UnityEngine\AnimationCurve.h"
#include "..\System\Action.h"
#include "TOD_Sky.h"

namespace rust 
{
	class TOD_Time : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::AnimationCurve* TimeCurve; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action* OnSecond; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* OnMinute; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* OnHour; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* OnDay; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* OnMonth; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* OnYear; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* OnSunrise; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* OnSunset; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Sky* sky; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::AnimationCurve* timeCurve; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::AnimationCurve* timeCurveInverse; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		float DayLengthInMinutes; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		bool ProgressTime; // 0x7c (size: 0x1, flags: 0x6, type: 0x2)
		bool UseDeviceDate; // 0x7d (size: 0x1, flags: 0x6, type: 0x2)
		bool UseDeviceTime; // 0x7e (size: 0x1, flags: 0x6, type: 0x2)
		bool UseTimeCurve; // 0x7f (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x80
}
