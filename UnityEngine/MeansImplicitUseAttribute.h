#pragma once

#include "..\JetBrains\Annotations\ImplicitUseKindFlags.h"
#include "..\JetBrains\Annotations\ImplicitUseTargetFlags.h"

namespace JetBrains
{
	namespace Annotations
{
	class MeansImplicitUseAttribute : public Attribute // 0x0
	{
	public:
		JetBrains::Annotations::ImplicitUseKindFlags <UseKindFlags>k__BackingField; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		JetBrains::Annotations::ImplicitUseTargetFlags <TargetFlags>k__BackingField; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
