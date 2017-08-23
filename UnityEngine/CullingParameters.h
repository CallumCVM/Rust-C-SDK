#pragma once

#include "..\UnityEngine\Experimental\Rendering\LODParameters.h"
#include "..\UnityEngine\Experimental\Rendering\CullingParameters\<_cullingPlanes>__FixedBuffer0.h"
#include "..\UnityEngine\Experimental\Rendering\CullingParameters\<_layerFarCullDistances>__FixedBuffer1.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Experimental\Rendering\ReflectionProbeSortOptions.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class CullingParameters : public ValueType // 0x0
	{
	public:
		int isOrthographic; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Experimental::Rendering::LODParameters lodParameters; // 0x14 (size: 0x1c, flags: 0x6, type: 0x11)
		UnityEngine::Experimental::Rendering::CullingParameters::<_cullingPlanes>__FixedBuffer0 _cullingPlanes; // 0x30 (size: 0xa0, flags: 0x1, type: 0x11)
		int cullingPlaneCount; // 0xd0 (size: 0x4, flags: 0x6, type: 0x8)
		int cullingMask; // 0xd4 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Experimental::Rendering::CullingParameters::<_layerFarCullDistances>__FixedBuffer1 _layerFarCullDistances; // 0xd8 (size: 0x80, flags: 0x1, type: 0x11)
		int layerCull; // 0x158 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Matrix4x4 cullingMatrix; // 0x15c (size: 0x40, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 position; // 0x19c (size: 0xc, flags: 0x6, type: 0x11)
		float shadowDistance; // 0x1a8 (size: 0x4, flags: 0x6, type: 0xc)
		int _cullingFlags; // 0x1ac (size: 0x4, flags: 0x1, type: 0x8)
		int _cameraInstanceID; // 0x1b0 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Experimental::Rendering::ReflectionProbeSortOptions reflectionProbeSortOptions; // 0x1b4 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x1b8
}
