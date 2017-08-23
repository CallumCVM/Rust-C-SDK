#pragma once

#include "..\System\Runtime\Serialization\ImportOptions.h"
#include "..\System\CodeDom\CodeCompileUnit.h"
#include "..\System\Collections\Generic\Dictionary<System\Xml\XmlQualifiedName,System\Xml\XmlQualifiedName>.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class XsdDataContractImporter : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::ImportOptions* options; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeCompileUnit* ccu; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::Dictionary<System::Xml::XmlQualifiedName,System::Xml::XmlQualifiedName> imported_names; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
