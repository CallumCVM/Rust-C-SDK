#pragma once

#include "..\System\Security\Permissions\IsolatedStorageContainment.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class IsolatedStoragePermission : public CodeAccessPermission // 0x0
	{
	public:
		__int64 m_userQuota; // 0x10 (size: 0x8, flags: 0x3, type: 0xa)
		__int64 m_machineQuota; // 0x18 (size: 0x8, flags: 0x3, type: 0xa)
		__int64 m_expirationDays; // 0x20 (size: 0x8, flags: 0x3, type: 0xa)
		bool m_permanentData; // 0x28 (size: 0x1, flags: 0x3, type: 0x2)
		System::Security::Permissions::IsolatedStorageContainment m_allowed; // 0x2c (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x30
}
