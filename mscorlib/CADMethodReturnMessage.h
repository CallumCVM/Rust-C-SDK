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
	class CADMethodReturnMessage : public CADMessageBase // 0x30
	{
	public:
		System::Object _returnValue; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Runtime::Remoting::Messaging::CADArgHolder* _exception; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
