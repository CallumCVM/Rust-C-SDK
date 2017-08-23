#pragma once

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class ObjectSecurity : public Object // 0x0
	{
	public:
		bool is_container; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_ds; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		bool access_rules_modified; // 0x12 (size: 0x1, flags: 0x1, type: 0x2)
		bool audit_rules_modified; // 0x13 (size: 0x1, flags: 0x1, type: 0x2)
		bool group_modified; // 0x14 (size: 0x1, flags: 0x1, type: 0x2)
		bool owner_modified; // 0x15 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
