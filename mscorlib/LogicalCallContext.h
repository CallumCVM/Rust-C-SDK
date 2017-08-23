#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Runtime\Remoting\Messaging\CallContextRemotingData.h"

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
	class LogicalCallContext : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* _data; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::CallContextRemotingData* _remotingData; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
