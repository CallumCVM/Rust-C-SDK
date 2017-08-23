#pragma once

#include "..\System\Runtime\Serialization\ObjectIDGenerator.h"
#include "..\System\Collections\Queue.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class Formatter : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::ObjectIDGenerator* m_idGenerator; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Collections::Queue* m_objectQueue; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x20
}
