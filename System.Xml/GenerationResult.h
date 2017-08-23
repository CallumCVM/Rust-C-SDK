#pragma once

#include "..\System\Xml\Serialization\XmlMapping.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class GenerationResult : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlMapping* Mapping; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* ReaderClassName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ReadMethodName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* WriterClassName; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* WriteMethodName; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Namespace; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* SerializerClassName; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* BaseSerializerClassName; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ImplementationClassName; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x58
}
