#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"
#include "..\System\Type.h"
#include "..\System\Reflection\MethodBase.h"
#include "..\System\Runtime\Remoting\Messaging\LogicalCallContext.h"
#include "..\System\Runtime\Remoting\Messaging\ArgInfo.h"
#include "..\System\Runtime\Remoting\Identity.h"
#include "..\System\Collections\IDictionary.h"

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
	class MethodCall : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _uri; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _typeName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _methodName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object* _args; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* _methodSignature; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::MethodBase* _methodBase; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Identity* _targetIdentity; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _genericArguments; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::IDictionary* ExternalProperties; // 0x60 (size: 0x8, flags: 0x4, type: 0x12)
		System::Collections::IDictionary* InternalProperties; // 0x68 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x70
}
