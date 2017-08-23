#pragma once

#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Collections\ObjectModel\ReadOnlyCollection<System\Linq\Expressions\Expression>.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class ElementInit : public Object // 0x0
	{
	public:
		System::Reflection::MethodInfo* add_method; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ObjectModel::ReadOnlyCollection<System::Linq::Expressions::Expression> arguments; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
