#pragma once

#include "..\UnityEngine\Experimental\Rendering\VisibleLight.h"
#include "..\UnityEngine\Experimental\Rendering\VisibleReflectionProbe.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class CullResults : public ValueType // 0x0
	{
	public:
		UnityEngine::Experimental::Rendering::VisibleLight* visibleLights; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Experimental::Rendering::VisibleReflectionProbe* visibleReflectionProbes; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		__int64 cullResults; // 0x20 (size: 0x8, flags: 0x3, type: 0x18)
	}; // size = 0x28
}
