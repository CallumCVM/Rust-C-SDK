#pragma once

#include "..\System\IO\Pipes\PipeAccessRights.h"

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class PipeAccessRule : public AccessRule // 0x30
	{
	public:
		System::IO::Pipes::PipeAccessRights <PipeAccessRights>k__BackingField; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
