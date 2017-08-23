#pragma once

#include "..\System\Xml\XmlDocument.h"
#include "..\System\Xml\XmlReader.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\Serialization\XmlSerializer.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlSerializationReader : public XmlSerializationGeneratedCode // 0x0
	{
	public:
		System::Xml::XmlDocument* document; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReader* reader; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* fixups; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* collFixups; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* collItemFixups; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* typesCallbacks; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* noIDTargets; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* targets; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* delayedListFixups; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlSerializer* eventSource; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* referencedObjects; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* w3SchemaNS; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* w3InstanceNS; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* w3InstanceNS2000; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* w3InstanceNS1999; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* soapNS; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* wsdlNS; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* nullX; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* nil; // 0xa0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* typeX; // 0xa8 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* arrayType; // 0xb0 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* arrayQName; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		int delayedFixupId; // 0xc0 (size: 0x4, flags: 0x1, type: 0x8)
		int readCount; // 0xc4 (size: 0x4, flags: 0x1, type: 0x8)
		int whileIterationCount; // 0xc8 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xd0
}
