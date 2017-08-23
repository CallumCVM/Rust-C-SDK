#pragma once

#include "TKey.h"
#include "TValue.h"

namespace System
{
	namespace Collections
{
{
		namespace Generic
{
			template <typename T0, typename T1>
	class KeyValuePair`2 : public ValueType // 0x0
	{
	public:
		TKey key; // 0x10 (size: 0x8, flags: 0x1, type: 0x13)
		TValue value; // 0x18 (size: 0x8, flags: 0x1, type: 0x13)
	}; // size = 0x20
}
