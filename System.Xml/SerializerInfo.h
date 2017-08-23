#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\SerializationFormat.h"
#include "..\System\Xml\Serialization\Hook.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class SerializerInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* ClassName; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Assembly; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ReaderClassName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* WriterClassName; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* BaseSerializerClassName; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ImplementationClassName; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Namespace; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString** NamespaceImports; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* OutFileName; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
		System::Xml::Serialization::Hook* ReaderHooks; // 0x58 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Xml::Serialization::Hook* WriterHooks; // 0x60 (size: 0x8, flags: 0x6, type: 0x1d)
		bool NoReader; // 0x68 (size: 0x1, flags: 0x6, type: 0x2)
		bool NoWriter; // 0x69 (size: 0x1, flags: 0x6, type: 0x2)
		bool GenerateAsInternal; // 0x6a (size: 0x1, flags: 0x6, type: 0x2)
		System::Xml::Serialization::SerializationFormat SerializationFormat; // 0x6c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x70
}
