#pragma once

#include "..\System\Collections\Generic\IList<T>.h"

namespace System
{
	namespace Collections
{
{
		namespace ObjectModel
{
			template <typename T0>
	class ReadOnlyCollection : public Object // 0x0
	{
	public:
		System::Collections::Generic::IList<T> list; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
