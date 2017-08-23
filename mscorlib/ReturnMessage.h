#pragma once

#include "..\System\Object.h"
#include "..\System\Runtime\Remoting\Messaging\LogicalCallContext.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Exception.h"
#include "..\System\Reflection\MethodBase.h"
#include "..\System\Type.h"
#include "..\System\Runtime\Remoting\Messaging\MethodReturnDictionary.h"
#include "..\System\Runtime\Remoting\Identity.h"
#include "..\System\Runtime\Remoting\Messaging\ArgInfo.h"

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
	class ReturnMessage : public Object // 0x0
	{
	public:
		System::Object* _outArgs; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object* _args; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int _outArgsCount; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		System::Runtime::Remoting::Messaging::LogicalCallContext* _callCtx; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _returnValue; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* _uri; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Exception* _exception; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodBase* _methodBase; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _methodName; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* _methodSignature; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _typeName; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::Remoting::Messaging::MethodReturnDictionary* _properties; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Identity* _targetIdentity; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x80
}
