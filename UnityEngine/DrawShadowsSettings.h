#pragma once

#include "..\UnityEngine\Experimental\Rendering\ShadowSplitData.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class DrawShadowsSettings : public ValueType // 0x0
	{
	public:
		__int64 _cullResults; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
		int lightIndex; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Experimental::Rendering::ShadowSplitData splitData; // 0x1c (size: 0xb4, flags: 0x6, type: 0x11)
	}; // size = 0xd0
}
