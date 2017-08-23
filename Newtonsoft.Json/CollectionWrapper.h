#pragma once

#include "..\System\Collections\IList.h"
#include "..\System\Collections\Generic\ICollection<T>.h"
#include "..\System\Object.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
			template <typename T0>
	class CollectionWrapper : public Object // 0x0
	{
	public:
		System::Collections::IList* _list; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Collections::Generic::ICollection<T> _genericCollection; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		System::Object _syncRoot; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x28
}
