#pragma once

#include "..\System\Type.h"
#include "..\System\Runtime\Remoting\Contexts\Context.h"
#include "..\System\MarshalByRefObject.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\Remoting\Identity.h"
#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Proxies
{
	class RealProxy : public Object // 0x0
	{
	public:
		System::Type* class_to_proxy; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Contexts::Context* _targetContext; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		System::MarshalByRefObject* _server; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int _targetDomainId; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* _targetUri; // 0x30 (size: 0x8, flags: 0x3, type: 0xe)
		System::Runtime::Remoting::Identity* _objectIdentity; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		System::Object _objTP; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object _stubData; // 0x48 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x50
}
