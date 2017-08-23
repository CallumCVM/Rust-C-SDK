#pragma once

#include "..\System\Object.h"
#include "..\System\Runtime\Remoting\Messaging\ArgInfo.h"
#include "..\System\Runtime\Remoting\Messaging\MethodCallMessageWrapper\DictionaryWrapper.h"

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
	class MethodCallMessageWrapper : public InternalMessageWrapper // 0x18
	{
	public:
		System::Object* _args; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::MethodCallMessageWrapper::DictionaryWrapper* _properties; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
