#pragma once

#include "..\System\Collections\Generic\IEnumerable<T>.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
			template <typename T0>
	class JEnumerable : public ValueType // 0x0
	{
	public:
		System::Collections::Generic::IEnumerable<T> _enumerable; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x18
}
