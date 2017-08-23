#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\MeshFilter.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Light.h"
#include "TOD_Sky.h"
#include "TOD_Animation.h"
#include "TOD_Time.h"
#include "TOD_Camera.h"
#include "TOD_Rays.h"
#include "TOD_Scattering.h"
#include "TOD_Shadows.h"

namespace rust 
{
	class TOD_Components : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* Space; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Stars; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Sun; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Moon; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Atmosphere; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Clear; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Clouds; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Billboards; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* Light; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* <DomeTransform>k__BackingField; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* <SpaceTransform>k__BackingField; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* <StarTransform>k__BackingField; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* <SunTransform>k__BackingField; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* <MoonTransform>k__BackingField; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* <AtmosphereTransform>k__BackingField; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* <ClearTransform>k__BackingField; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* <CloudTransform>k__BackingField; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* <BillboardTransform>k__BackingField; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* <LightTransform>k__BackingField; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* <SpaceRenderer>k__BackingField; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* <StarRenderer>k__BackingField; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* <SunRenderer>k__BackingField; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* <MoonRenderer>k__BackingField; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* <AtmosphereRenderer>k__BackingField; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* <ClearRenderer>k__BackingField; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* <CloudRenderer>k__BackingField; // 0xe0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* <BillboardRenderers>k__BackingField; // 0xe8 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::MeshFilter* <SpaceMeshFilter>k__BackingField; // 0xf0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* <StarMeshFilter>k__BackingField; // 0xf8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* <SunMeshFilter>k__BackingField; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* <MoonMeshFilter>k__BackingField; // 0x108 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* <AtmosphereMeshFilter>k__BackingField; // 0x110 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* <ClearMeshFilter>k__BackingField; // 0x118 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* <CloudMeshFilter>k__BackingField; // 0x120 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* <BillboardMeshFilters>k__BackingField; // 0x128 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Material* <SpaceMaterial>k__BackingField; // 0x130 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* <StarMaterial>k__BackingField; // 0x138 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* <SunMaterial>k__BackingField; // 0x140 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* <MoonMaterial>k__BackingField; // 0x148 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* <AtmosphereMaterial>k__BackingField; // 0x150 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* <ClearMaterial>k__BackingField; // 0x158 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* <CloudMaterial>k__BackingField; // 0x160 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* <BillboardMaterials>k__BackingField; // 0x168 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Light* <LightSource>k__BackingField; // 0x170 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Sky* <Sky>k__BackingField; // 0x178 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Animation* <Animation>k__BackingField; // 0x180 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Time* <Time>k__BackingField; // 0x188 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Camera* <Camera>k__BackingField; // 0x190 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Rays* <Rays>k__BackingField; // 0x198 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Scattering* <Scattering>k__BackingField; // 0x1a0 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Shadows* <Shadows>k__BackingField; // 0x1a8 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x1b0
}
