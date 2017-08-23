#pragma once

#include "..\System\WeakReference.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ClientIdentity : public Identity // 0x48
	{
	public:
		System::WeakReference* _proxyReference; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
