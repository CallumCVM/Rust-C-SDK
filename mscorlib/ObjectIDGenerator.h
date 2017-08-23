#pragma once

#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class ObjectIDGenerator : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* table; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 current; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x20
}
