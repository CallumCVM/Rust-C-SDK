#pragma once

#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Experimental\Rendering\SortFlags.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class DrawRendererSortSettings : public ValueType // 0x0
	{
	public:
		UnityEngine::Matrix4x4 worldToCameraMatrix; // 0x10 (size: 0x40, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 cameraPosition; // 0x50 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Experimental::Rendering::SortFlags flags; // 0x5c (size: 0x4, flags: 0x6, type: 0x11)
		int _sortOrthographic; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x68
}
