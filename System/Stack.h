#pragma once

#include "T.h"

namespace System
{
	namespace Collections
{
{
		namespace Generic
{
			template <typename T0>
	class Stack : public Object // 0x0
	{
	public:
		T* _array; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int _size; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _version; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
