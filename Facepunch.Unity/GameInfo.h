#pragma once

#include "..\Facepunch\Models\AppInfo.h"
#include "..\Facepunch\Models\Auth.h"
#include "..\Facepunch\Models\PlayerInfo.h"

namespace Facepunch
{
	namespace Models
{
{
		namespace Feedback
{
	class GameInfo : public ValueType // 0x0
	{
	public:
		Facepunch::Models::AppInfo AppInfo; // 0x10 (size: 0x1, flags: 0x6, type: 0x11)
		Facepunch::Models::Auth* Auth; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Models::PlayerInfo* Players; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
