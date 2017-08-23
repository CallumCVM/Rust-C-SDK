#pragma once

#include "..\System\Object.h"
#include "..\System\Runtime\Remoting\Messaging\MessageSurrogateFilter.h"
#include "..\System\Runtime\Serialization\ISurrogateSelector.h"

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
	class RemotingSurrogateSelector : public Object // 0x0
	{
	public:
		System::Object _rootObj; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Runtime::Remoting::Messaging::MessageSurrogateFilter* _filter; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::ISurrogateSelector* _next; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
