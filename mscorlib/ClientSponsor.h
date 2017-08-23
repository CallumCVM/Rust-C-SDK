#pragma once

#include "..\System\TimeSpan.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Lifetime
{
	class ClientSponsor : public MarshalByRefObject // 0x18
	{
	public:
		System::TimeSpan renewal_time; // 0x18 (size: 0x8, flags: 0x1, type: 0x11)
		System::Collections::Hashtable* registered_objects; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
