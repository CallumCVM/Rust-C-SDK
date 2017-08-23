#pragma once

#include "..\System\Collections\Generic\IDictionary<TFirst,TSecond>.h"
#include "..\System\Collections\Generic\IDictionary<TSecond,TFirst>.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
			template <typename T0, typename T1>
	class BidirectionalDictionary`2 : public Object // 0x0
	{
	public:
		System::Collections::Generic::IDictionary<TFirst,TSecond> _firstToSecond; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
		System::Collections::Generic::IDictionary<TSecond,TFirst> _secondToFirst; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::UnicodeString* _duplicateFirstErrorMessage; // 0x20 (size: 0x8, flags: 0x21, type: 0xe)
		UnityEngine::UnicodeString* _duplicateSecondErrorMessage; // 0x28 (size: 0x8, flags: 0x21, type: 0xe)
	}; // size = 0x30
}
