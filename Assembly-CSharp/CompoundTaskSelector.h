#pragma once

#include "..\Rust\Ai\HTN\DecompositionType.h"
#include "..\UnityEngine\List.h"

namespace Rust
{
	namespace Ai
{
{
		namespace HTN
{
	class CompoundTaskSelector : public Selector // 0x30
	{
	public:
		UnityEngine::List<Apex.AI.ICompositeScorer>* _preconditions; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<Rust.Ai.HTN.TaskQualifier>* _taskQualifiers; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		Rust::Ai::HTN::DecompositionType _decomposition; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
