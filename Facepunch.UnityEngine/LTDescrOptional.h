#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "LTBezierPath.h"
#include "LTSpline.h"
#include "..\UnityEngine\AnimationCurve.h"
#include "LTRect.h"
#include "..\System\Action<UnityEngine\Vector2>.h"
#include "..\System\Action<UnityEngine\Vector3>.h"
#include "..\System\Action<UnityEngine\Vector3,System\Object>.h"
#include "..\System\Action<UnityEngine\Color>.h"
#include "..\System\Action<UnityEngine\Color,System\Object>.h"
#include "..\System\Action.h"
#include "..\System\Action<System\Object>.h"
#include "..\System\Object.h"

namespace rust 
{
	class LTDescrOptional : public Object // 0x0
	{
	public:
		UnityEngine::Transform* <toTrans>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		LTBezierPath* <path>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		LTSpline* <spline>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::AnimationCurve* animationCurve; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		LTRect* <ltRect>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System.Action<float> <onUpdateFloat>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		System.Action<float,float> <onUpdateFloatRatio>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		System.Action<float,System.Object> <onUpdateFloatObject>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action<UnityEngine::Vector2> <onUpdateVector2>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action<UnityEngine::Vector3> <onUpdateVector3>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action<UnityEngine::Vector3,System::Object> <onUpdateVector3Object>k__BackingField; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action<UnityEngine::Color> <onUpdateColor>k__BackingField; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action<UnityEngine::Color,System::Object> <onUpdateColorObject>k__BackingField; // 0x70 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action* <onComplete>k__BackingField; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action<System::Object> <onCompleteObject>k__BackingField; // 0x80 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object <onCompleteParam>k__BackingField; // 0x88 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object <onUpdateParam>k__BackingField; // 0x90 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Action* <onStart>k__BackingField; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 <point>k__BackingField; // 0xa0 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 <axis>k__BackingField; // 0xac (size: 0xc, flags: 0x1, type: 0x11)
		float <lastVal>k__BackingField; // 0xb8 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Quaternion <origRotation>k__BackingField; // 0xbc (size: 0x10, flags: 0x1, type: 0x11)
		int initFrameCount; // 0xcc (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0xd0
}
