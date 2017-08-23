#pragma once

namespace System
{
	namespace Reflection
{
	class ParameterModifier : public ValueType // 0x0
	{
	public:
		bool* _byref; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x18
}
