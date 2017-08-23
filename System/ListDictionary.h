#pragma once

#include "..\System\Collections\Specialized\ListDictionary\DictionaryNode.h"
#include "..\System\Collections\IComparer.h"

namespace System
{
	namespace Collections
{
{
		namespace Specialized
{
	class ListDictionary : public Object // 0x0
	{
	public:
		System::Collections::Specialized::ListDictionary::DictionaryNode* head; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IComparer* comparer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int count; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int version; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
