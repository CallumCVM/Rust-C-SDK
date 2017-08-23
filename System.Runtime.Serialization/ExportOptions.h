#pragma once

#include "..\System\Runtime\Serialization\IDataContractSurrogate.h"
#include "..\System\Runtime\Serialization\KnownTypeCollection.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class ExportOptions : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::IDataContractSurrogate* surrogate; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::KnownTypeCollection* known_types; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
