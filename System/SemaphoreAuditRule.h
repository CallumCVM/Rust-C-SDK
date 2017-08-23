#pragma once

#include "..\System\Security\AccessControl\SemaphoreRights.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class SemaphoreAuditRule : public AuditRule // 0x30
	{
	public:
		System::Security::AccessControl::SemaphoreRights semaphoreRights; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
