#pragma once

#include "..\System\Collections\IDictionary.h"
#include "..\System\Collections\IDictionaryEnumerator.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Channels
{
	class AggregateEnumerator : public Object // 0x0
	{
	public:
		System::Collections::IDictionary* dictionaries; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int pos; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		System::Collections::IDictionaryEnumerator* currente; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
