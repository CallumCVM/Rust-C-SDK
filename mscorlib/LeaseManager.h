#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Threading\Timer.h"

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
	class LeaseManager : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* _objects; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::Timer* _timer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
