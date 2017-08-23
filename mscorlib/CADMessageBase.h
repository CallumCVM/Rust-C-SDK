#pragma once

#include "..\System\Object.h"
#include "..\System\Runtime\Remoting\Messaging\CADArgHolder.h"

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
	class CADMessageBase : public Object // 0x0
	{
	public:
		System::Object* _args; // 0x10 (size: 0x8, flags: 0x4, type: 0x1d)
		unsigned char* _serializedArgs; // 0x18 (size: 0x8, flags: 0x4, type: 0x1d)
		int _propertyCount; // 0x20 (size: 0x4, flags: 0x4, type: 0x8)
		System::Runtime::Remoting::Messaging::CADArgHolder* _callContext; // 0x28 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x30
}
