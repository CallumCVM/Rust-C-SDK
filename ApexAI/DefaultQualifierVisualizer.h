#pragma once

#include "..\Apex\AI\IDefaultQualifier.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class DefaultQualifierVisualizer : public QualifierVisualizer // 0x40
	{
	public:
		Apex::AI::IDefaultQualifier* _defQualifier; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
