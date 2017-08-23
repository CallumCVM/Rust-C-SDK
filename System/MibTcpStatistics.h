#pragma once

#include "..\System\Collections\Specialized\StringDictionary.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class MibTcpStatistics : public TcpStatistics // 0x0
	{
	public:
		System::Collections::Specialized::StringDictionary* dic; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
