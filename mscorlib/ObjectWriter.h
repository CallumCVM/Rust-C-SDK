#pragma once

#include "..\System\Runtime\Serialization\ObjectIDGenerator.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\Queue.h"
#include "..\System\Runtime\Serialization\ISurrogateSelector.h"
#include "..\System\Runtime\Serialization\StreamingContext.h"
#include "..\System\Runtime\Serialization\Formatters\FormatterAssemblyStyle.h"
#include "..\System\Runtime\Serialization\Formatters\FormatterTypeStyle.h"
#include "..\System\Runtime\Serialization\SerializationObjectManager.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
{
{
			namespace Formatters
{
{
{
{
				namespace Binary
{
	class ObjectWriter : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::ObjectIDGenerator* _idGenerator; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _cachedMetadata; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Queue* _pendingObjects; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _assemblyCache; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::ISurrogateSelector* _surrogateSelector; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::StreamingContext _context; // 0x38 (size: 0x10, flags: 0x1, type: 0x11)
		System::Runtime::Serialization::Formatters::FormatterAssemblyStyle _assemblyFormat; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::Serialization::Formatters::FormatterTypeStyle _typeFormat; // 0x4c (size: 0x4, flags: 0x1, type: 0x11)
		unsigned char* arrayBuffer; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		int ArrayBufferLength; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		System::Runtime::Serialization::SerializationObjectManager* _manager; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
