#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Color.h"
#include "..\System\Collections\Generic\Stack<UnityEngine\Matrix4x4>.h"

namespace rust 
{
	class BaseObject : public Object // 0x0
	{
	public:
		System::Collections::Generic::Stack<UnityEngine::Matrix4x4> matrixStack; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::Vector3 position; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Matrix4x4 transform; // 0x24 (size: 0x40, flags: 0x6, type: 0x11)
		UnityEngine::Color color; // 0x64 (size: 0x10, flags: 0x6, type: 0x11)
		float end; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		float start; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		float delta; // 0x7c (size: 0x4, flags: 0x6, type: 0xc)
		bool distanceFade; // 0x80 (size: 0x1, flags: 0x6, type: 0x2)
		bool ztest; // 0x81 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x88
}
