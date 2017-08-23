#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Runtime\Serialization\ISurrogateSelector.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class SurrogateSelector : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* Surrogates; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::ISurrogateSelector* nextSelector; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
