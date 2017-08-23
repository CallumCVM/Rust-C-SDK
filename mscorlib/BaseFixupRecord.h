#pragma once

#include "..\System\Runtime\Serialization\ObjectRecord.h"
#include "..\System\Runtime\Serialization\BaseFixupRecord.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class BaseFixupRecord : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::ObjectRecord* ObjectToBeFixed; // 0x10 (size: 0x8, flags: 0x5, type: 0x12)
		System::Runtime::Serialization::ObjectRecord* ObjectRequired; // 0x18 (size: 0x8, flags: 0x5, type: 0x12)
		System::Runtime::Serialization::BaseFixupRecord* NextSameContainer; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Runtime::Serialization::BaseFixupRecord* NextSameRequired; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
