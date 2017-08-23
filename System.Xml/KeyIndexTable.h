#pragma once

#include "..\Mono\Xml\Xsl\XsltCompiledContext.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class KeyIndexTable : public Object // 0x0
	{
	public:
		Mono::Xml::Xsl::XsltCompiledContext* ctx; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* keys; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* mappedDocuments; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
