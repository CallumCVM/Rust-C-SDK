#pragma once

#include "..\System\Object.h"
#include "..\System\Collections\Generic\Dictionary<TKey,TValue>.h"
#include "..\System\Func<TKey,TValue>.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
			template <typename T0, typename T1>
	class ThreadSafeStore`2 : public Object // 0x0
	{
	public:
		System::Object _lock; // 0x10 (size: 0x8, flags: 0x21, type: 0x1c)
		System::Collections::Generic::Dictionary<TKey,TValue> _store; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Func<TKey,TValue> _creator; // 0x20 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x28
}
