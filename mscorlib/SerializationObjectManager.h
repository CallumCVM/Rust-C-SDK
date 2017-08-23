#pragma once

#include "..\System\Runtime\Serialization\StreamingContext.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Runtime\Serialization\SerializationCallbacks\CallbackHandler.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class SerializationObjectManager : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::StreamingContext context; // 0x10 (size: 0x10, flags: 0x21, type: 0x11)
		System::Collections::Hashtable* seen; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		System::Runtime::Serialization::SerializationCallbacks::CallbackHandler* callbacks; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
