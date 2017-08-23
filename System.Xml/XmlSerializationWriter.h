#pragma once

#include "..\System\Runtime\Serialization\ObjectIDGenerator.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\XmlWriter.h"
#include "..\System\Collections\Queue.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlSerializationWriter : public XmlSerializationGeneratedCode // 0x0
	{
	public:
		System::Runtime::Serialization::ObjectIDGenerator* idGenerator; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* namespaces; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlWriter* writer; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Queue* referencedElements; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* callbacks; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* serializedObjects; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int qnameCount; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		bool topLevelElement; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
