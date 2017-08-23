#pragma once

#include "..\UnityEngine\List.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class CommonObjectSecurity : public ObjectSecurity // 0x18
	{
	public:
		UnityEngine::List<System.Security.AccessControl.AccessRule>* access_rules; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<System.Security.AccessControl.AuditRule>* audit_rules; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
