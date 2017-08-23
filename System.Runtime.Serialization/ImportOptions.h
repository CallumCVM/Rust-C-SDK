#pragma once

#include "..\System\Runtime\Serialization\IDataContractSurrogate.h"
#include "..\System\Collections\Generic\ICollection<System\Type>.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\Compiler\CodeDomProvider.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class ImportOptions : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::IDataContractSurrogate* surrogate; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::ICollection<System::Type> referenced_collection_types; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::ICollection<System::Type> referenced_types; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.IDictionary<UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> namespaces; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		System::CodeDom::Compiler::CodeDomProvider* code_provider; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool enable_data_binding; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool generate_internal; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
		bool generate_serializable; // 0x3a (size: 0x1, flags: 0x1, type: 0x2)
		bool import_xml_type; // 0x3b (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
