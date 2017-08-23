#pragma once

#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class NetCodeGroup : public CodeGroup // 0x38
	{
	public:
		System::Collections::Hashtable* _rules; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int _hashcode; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
