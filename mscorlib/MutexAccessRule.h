#pragma once

#include "..\System\Security\AccessControl\MutexRights.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class MutexAccessRule : public AccessRule // 0x30
	{
	public:
		System::Security::AccessControl::MutexRights rights; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
