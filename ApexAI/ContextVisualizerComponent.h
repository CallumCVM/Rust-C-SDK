#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Apex\AI\Visualization\SceneVisualizationMode.h"
#include "..\System\Guid.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class ContextVisualizerComponent : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* relevantAIId; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		Apex::AI::Visualization::SceneVisualizationMode mode; // 0x20 (size: 0x4, flags: 0x3, type: 0x11)
		System::Guid _relevantAIGuid; // 0x24 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
