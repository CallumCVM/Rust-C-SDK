#pragma once

#include "..\Rust\Ai\HTN\ITask.h"

namespace Rust
{
	namespace Ai
{
{
		namespace HTN
{
	class TaskQualifier : public QualifierBase // 0x20
	{
	public:
		Rust::Ai::HTN::ITask* _task; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		float _lastScore; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
