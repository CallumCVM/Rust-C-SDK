#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class LODParameters : public ValueType // 0x0
	{
	public:
		bool isOrthographic; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 cameraPosition; // 0x14 (size: 0xc, flags: 0x6, type: 0x11)
		float fieldOfView; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float orthoSize; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		int cameraPixelHeight; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
