#pragma once

#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Collections
{
{
		namespace Specialized
{
	class ProcessStringDictionary : public StringDictionary // 0x18
	{
	public:
		System::Collections::Hashtable* table; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
