#pragma once

#include "..\System\Security\AccessControl\AuditFlags.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class AuditRule : public AuthorizationRule // 0x28
	{
	public:
		System::Security::AccessControl::AuditFlags auditFlags; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
