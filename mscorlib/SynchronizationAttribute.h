#pragma once

#include "..\System\Threading\Mutex.h"
#include "..\System\Threading\Thread.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Contexts
{
	class SynchronizationAttribute : public ContextAttribute // 0x18
	{
	public:
		bool _bReEntrant; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		int _flavor; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		bool _locked; // 0x20 (size: 0x1, flags: 0x81, type: 0x2)
		int _lockCount; // 0x24 (size: 0x4, flags: 0x81, type: 0x8)
		System::Threading::Mutex* _mutex; // 0x28 (size: 0x8, flags: 0x81, type: 0x12)
		System::Threading::Thread* _ownerThread; // 0x30 (size: 0x8, flags: 0x81, type: 0x12)
	}; // size = 0x38
}
