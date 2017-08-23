#pragma once

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class DesignerTransactionCloseEventArgs : public EventArgs // 0x0
	{
	public:
		bool commit; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool last_transaction; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
