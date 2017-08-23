#pragma once

namespace System
{
	namespace Security
{
{
		namespace Principal
{
	class WindowsImpersonationContext : public Object // 0x0
	{
	public:
		__int64 _token; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
		bool undo; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
