#pragma once

#include "..\System\Object.h"
#include "..\System\Runtime\Remoting\Messaging\ArgInfo.h"
#include "..\System\Runtime\Remoting\Messaging\MethodReturnMessageWrapper\DictionaryWrapper.h"
#include "..\System\Exception.h"

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
	class MethodReturnMessageWrapper : public InternalMessageWrapper // 0x18
	{
	public:
		System::Object* _args; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Runtime::Remoting::Messaging::ArgInfo* _outArgInfo; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::MethodReturnMessageWrapper::DictionaryWrapper* _properties; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Exception* _exception; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _return; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x40
}
