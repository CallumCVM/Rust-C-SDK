#pragma once

#include "..\System\Xml\Serialization\CodeIdentifiers.h"
#include "..\System\Collections\Specialized\StringCollection.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class ImportContext : public Object // 0x0
	{
	public:
		System::Xml::Serialization::CodeIdentifiers* _typeIdentifiers; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::StringCollection* _warnings; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* MappedTypes; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		System::Collections::Hashtable* DataMappedTypes; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		System::Collections::Hashtable* SharedAnonymousTypes; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		bool _shareTypes; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
