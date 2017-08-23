#pragma once

#include "..\UnityEngine\ComputeBuffer.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Color32.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\ComputeShader.h"

namespace rust 
{
	class BufferSet : public Object // 0x0
	{
	public:
		UnityEngine::ComputeBuffer* inputBuffer; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::ComputeBuffer* resultBuffer; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* inputTexture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RenderTexture* resultTexture; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* resultReadTexture; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color* inputData; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Color32* resultData; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Material* fallbackMat; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::ComputeShader* compute; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		int width; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		int height; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
		__int64 readbackInst; // 0x60 (size: 0x8, flags: 0x6, type: 0x18)
		bool usingFallback; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
