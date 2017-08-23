#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\Remoting\Activation\IActivator.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Activation
{
	class AppDomainLevelActivator : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _activationUrl; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::Remoting::Activation::IActivator* _next; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
