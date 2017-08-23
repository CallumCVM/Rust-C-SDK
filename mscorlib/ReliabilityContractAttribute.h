#pragma once

#include "..\System\Runtime\ConstrainedExecution\Consistency.h"
#include "..\System\Runtime\ConstrainedExecution\Cer.h"

namespace System
{
	namespace Runtime
{
{
		namespace ConstrainedExecution
{
	class ReliabilityContractAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::ConstrainedExecution::Consistency consistency; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::ConstrainedExecution::Cer cer; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
