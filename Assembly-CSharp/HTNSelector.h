#pragma once

#include "..\UnityEngine\List.h"

namespace Rust
{
	namespace Ai
{
{
		namespace HTN
{
	class HTNSelector : public Selector // 0x30
	{
	public:
		UnityEngine::List<Rust.Ai.HTN.TaskQualifier>* _tasks; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<Rust.Ai.HTN.PrimitiveTaskSelector>* _plan; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x40
}
