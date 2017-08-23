#pragma once

#include "..\System\Xml\Serialization\XmlMapping.h"
#include "..\System\Xml\Serialization\SerializationFormat.h"
#include "..\System\IO\TextWriter.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\Serialization\SerializerInfo.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\Serialization\GenerationResult.h"
#include "..\System\Xml\Serialization\CodeIdentifiers.h"
#include "..\System\Collections\Stack.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class SerializationCodeGenerator : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlMapping* _typeMap; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::TextWriter* _writer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _uniqueNames; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SerializerInfo* _config; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _mapsToGenerate; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _fixupCallbacks; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _referencedTypes; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::GenerationResult* _results; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::Serialization::GenerationResult* _result; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlMapping* _xmlMaps; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::Serialization::CodeIdentifiers* classNames; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _listsToFill; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _hookVariables; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* _hookContexts; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* _hookOpenHooks; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SerializationFormat _format; // 0x88 (size: 0x4, flags: 0x1, type: 0x11)
		int _tempVarId; // 0x8c (size: 0x4, flags: 0x1, type: 0x8)
		int _indent; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		int _methodId; // 0x94 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x98
}
