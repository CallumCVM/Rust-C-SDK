#pragma once

#include "WaterSurfaceDesc.h"
#include "..\UnityEngine\Vector3.h"
#include "WaterQuality.h"
#include "WaterSimulation.h"
#include "WaterRendering.h"
#include "..\UnityEngine\MaterialPropertyBlock.h"
#include "..\UnityEngine\ReflectionProbe.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\List.h"
#include "CommandBufferManager.h"

namespace rust 
{
	class Water : public MonoBehaviour // 0x18
	{
	public:
		WaterSurfaceDesc* ocean; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		WaterSurfaceDesc* rivers; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		WaterSurfaceDesc* lakes; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		WaterSimulation* simulation; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		WaterRendering* rendering; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::MaterialPropertyBlock* propertyBlock; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::ReflectionProbe* reflectionProbe; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* oceanMaterialInst; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* riverMaterialInst; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* lakeMaterialInst; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* riverObjs; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::GameObject* lakeObjs; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::List<MeshLink>* riverLinks; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<MeshLink>* lakeLinks; // 0x80 (size: 0x8, flags: 0x1, type: 0x15)
		CommandBufferManager* commandBufferManager; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 wind; // 0x90 (size: 0xc, flags: 0x6, type: 0x11)
		bool showDebug; // 0x9c (size: 0x1, flags: 0x6, type: 0x2)
		bool showGizmos; // 0x9d (size: 0x1, flags: 0x6, type: 0x2)
		WaterQuality Quality; // 0xa0 (size: 0x4, flags: 0x6, type: 0x11)
		WaterQuality prevQuality; // 0xa4 (size: 0x4, flags: 0x1, type: 0x11)
		float prevWaterLevel; // 0xa8 (size: 0x4, flags: 0x1, type: 0xc)
		bool simulateNextFrame; // 0xac (size: 0x1, flags: 0x1, type: 0x2)
		int visibilityMask; // 0xb0 (size: 0x4, flags: 0x1, type: 0x8)
		bool initialized; // 0xb4 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xb8
}
