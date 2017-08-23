#pragma once

#include "..\System\Reflection\MonoMethod.h"
#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\Remoting\Messaging\LogicalCallContext.h"
#include "..\System\Exception.h"
#include "..\System\Runtime\Remoting\Messaging\AsyncResult.h"
#include "..\System\Runtime\Remoting\Messaging\CallType.h"
#include "..\System\Runtime\Remoting\Messaging\MethodCallDictionary.h"
#include "..\System\Type.h"
#include "..\System\Runtime\Remoting\Identity.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Messaging
{
	class MonoMethodMessage : public Object // 0x0
	{
	public:
		System::Reflection::MonoMethod* method; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object* args; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** names; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* arg_types; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Runtime::Remoting::Messaging::LogicalCallContext* ctx; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		System::Object rval; // 0x38 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Exception* exc; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		System::Runtime::Remoting::Messaging::AsyncResult* asyncResult; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::CallType call_type; // 0x50 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* uri; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::Remoting::Messaging::MethodCallDictionary* properties; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* methodSignature; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Runtime::Remoting::Identity* identity; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x78
}
