#pragma once

#include "..\System\Runtime\Remoting\Activation\IActivator.h"
#include "..\System\Object.h"
#include "..\System\Collections\IList.h"
#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\Remoting\Proxies\RemotingProxy.h"

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
	class ConstructionCall : public MethodCall // 0x70
	{
	public:
		System::Runtime::Remoting::Activation::IActivator* _activator; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object* _activationAttributes; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::IList* _contextProperties; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _activationType; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _activationTypeName; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		bool _isContextOk; // 0x98 (size: 0x1, flags: 0x1, type: 0x2)
		System::Runtime::Remoting::Proxies::RemotingProxy* _sourceProxy; // 0xa0 (size: 0x8, flags: 0x81, type: 0x12)
	}; // size = 0xa8
}
