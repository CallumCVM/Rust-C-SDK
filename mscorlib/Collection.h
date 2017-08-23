#pragma once

#include "..\System\Collections\Generic\IList<T>.h"
#include "..\System\Object.h"

namespace System
{
	namespace Collections
{
{
		namespace ObjectModel
{
			template <typename T0>
	class Collection : public Object // 0x0
	{
	public:
		System::Collections::Generic::IList<T> list; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object syncRoot; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x20
}
