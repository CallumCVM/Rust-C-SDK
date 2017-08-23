#pragma once

#include "..\UnityEngine\TextAsset.h"
#include "Water.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Vector4.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Rendering\CommandBuffer.h"
#include "CommandBufferManager.h"
#include "..\UnityEngine\Camera.h"

namespace rust 
{
	class WaterSimulation : public Object // 0x0
	{
	public:
		UnityEngine::TextAsset* perlinNoiseData; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Water* water; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* perlinNoiseMap; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* displacementMap; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* normalFoldMap; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* computeNormalFoldMat; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* simulationMat; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* hTilde0Map; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* dispersionMap; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* butterflyMap; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* hTilde_hMap; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* hTilde_dxdzMap; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rendering::CommandBuffer* commandBuffer; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		CommandBufferManager* commandBufferManager; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Camera* camera; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		int solverResolution; // 0x88 (size: 0x4, flags: 0x6, type: 0x8)
		float solverSizeInWorld; // 0x8c (size: 0x4, flags: 0x6, type: 0xc)
		float gravity; // 0x90 (size: 0x4, flags: 0x6, type: 0xc)
		float amplitude; // 0x94 (size: 0x4, flags: 0x6, type: 0xc)
		int solverButterflyCount; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Vector2 windDirection; // 0x9c (size: 0x8, flags: 0x1, type: 0x11)
		float windMagnitude; // 0xa4 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector4 displacementMapTexelSize; // 0xa8 (size: 0x10, flags: 0x1, type: 0x11)
		bool playing; // 0xb8 (size: 0x1, flags: 0x1, type: 0x2)
		bool initialized; // 0xb9 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xc0
}
