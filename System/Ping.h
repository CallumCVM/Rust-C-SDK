#pragma once

#include "..\System\ComponentModel\BackgroundWorker.h"
#include "..\System\Object.h"
#include "..\System\Net\NetworkInformation\PingCompletedEventHandler.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Ping : public Component // 0x30
	{
	public:
		System::ComponentModel::BackgroundWorker* worker; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object user_async_state; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Net::NetworkInformation::PingCompletedEventHandler* PingCompleted; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
