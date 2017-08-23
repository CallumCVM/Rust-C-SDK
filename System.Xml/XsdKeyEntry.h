#pragma once

#include "..\Mono\Xml\Schema\XsdKeyEntryFieldCollection.h"
#include "..\Mono\Xml\Schema\XsdKeyTable.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdKeyEntry : public Object // 0x0
	{
	public:
		Mono::Xml::Schema::XsdKeyEntryFieldCollection* KeyFields; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Mono::Xml::Schema::XsdKeyTable* OwnerSequence; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int StartDepth; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int SelectorLineNumber; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		int SelectorLinePosition; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		bool SelectorHasLineInfo; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		bool KeyRefFound; // 0x2d (size: 0x1, flags: 0x6, type: 0x2)
		bool keyFound; // 0x2e (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
