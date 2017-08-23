#pragma once

#include "..\UnityEngine\Experimental\Rendering\DrawRendererSortSettings.h"
#include "..\UnityEngine\Experimental\Rendering\ShaderPassName.h"
#include "..\UnityEngine\Experimental\Rendering\InputFilter.h"
#include "..\UnityEngine\Experimental\Rendering\RendererConfiguration.h"
#include "..\UnityEngine\Experimental\Rendering\DrawRendererFlags.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class DrawRendererSettings : public ValueType // 0x0
	{
	public:
		UnityEngine::Experimental::Rendering::DrawRendererSortSettings sorting; // 0x10 (size: 0x54, flags: 0x6, type: 0x11)
		UnityEngine::Experimental::Rendering::ShaderPassName shaderPassName; // 0x64 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Experimental::Rendering::InputFilter inputFilter; // 0x68 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Experimental::Rendering::RendererConfiguration rendererConfiguration; // 0x74 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Experimental::Rendering::DrawRendererFlags flags; // 0x78 (size: 0x4, flags: 0x6, type: 0x11)
		__int64 _cullResults; // 0x80 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x88
}
