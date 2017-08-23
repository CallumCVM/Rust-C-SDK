#pragma once

#include "..\System\Runtime\Serialization\ISurrogateSelector.h"
#include "..\System\Runtime\Serialization\StreamingContext.h"
#include "..\System\Runtime\Serialization\SerializationBinder.h"
#include "..\System\Runtime\Serialization\Formatters\TypeFilterLevel.h"
#include "..\System\Runtime\Serialization\ObjectManager.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Object.h"

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
	class ObjectReader : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::ISurrogateSelector* _surrogateSelector; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::StreamingContext _context; // 0x18 (size: 0x10, flags: 0x1, type: 0x11)
		System::Runtime::Serialization::SerializationBinder* _binder; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::Formatters::TypeFilterLevel _filterLevel; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::Serialization::ObjectManager* _manager; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _registeredAssemblies; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _typeMetadataCache; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _lastObject; // 0x50 (size: 0x8, flags: 0x1, type: 0x1c)
		__int64 _lastObjectID; // 0x58 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 _rootObjectID; // 0x60 (size: 0x8, flags: 0x1, type: 0xa)
		unsigned char* arrayBuffer; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		int ArrayBufferLength; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x78
}
