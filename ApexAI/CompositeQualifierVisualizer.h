#pragma once

#include "..\UnityEngine\List.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class CompositeQualifierVisualizer : public QualifierVisualizer // 0x40
	{
	public:
		UnityEngine::List<Apex.AI.IContextualScorer>* _scorers; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x48
}
