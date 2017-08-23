#pragma once

#include "..\System\Collections\IDictionary.h"
#include "..\System\Collections\ArrayList.h"

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
	class AggregateDictionary : public Object // 0x0
	{
	public:
		System::Collections::IDictionary* dictionaries; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* _values; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _keys; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
