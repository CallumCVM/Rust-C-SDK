#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class RenderPipelineAsset : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::List<UnityEngine.Experimental.Rendering.IRenderPipeline>* m_CreatedPipelines; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x20
}
