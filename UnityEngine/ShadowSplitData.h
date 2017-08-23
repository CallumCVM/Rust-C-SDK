#pragma once

#include "..\UnityEngine\Experimental\Rendering\ShadowSplitData\<_cullingPlanes>__FixedBuffer2.h"
#include "..\UnityEngine\Vector4.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class ShadowSplitData : public ValueType // 0x0
	{
	public:
		int cullingPlaneCount; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Experimental::Rendering::ShadowSplitData::<_cullingPlanes>__FixedBuffer2 _cullingPlanes; // 0x14 (size: 0xa0, flags: 0x1, type: 0x11)
		UnityEngine::Vector4 cullingSphere; // 0xb4 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0xc8
}
