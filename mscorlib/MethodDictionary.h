#pragma once

#include "..\System\Collections\IDictionary.h"
#include "..\System\Runtime\Remoting\Messaging\IMethodMessage.h"
#include "..\UnityEngine\UnicodeString*.h"

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
	class MethodDictionary : public Object // 0x0
	{
	public:
		System::Collections::IDictionary* _internalProperties; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::IMethodMessage* _message; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UnicodeString** _methodKeys; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool _ownProperties; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
