#pragma once

#include "..\System\MarshalByRefObject.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class ClientActivatedIdentity : public ServerIdentity // 0x70
	{
	public:
		System::MarshalByRefObject* _targetThis; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x78
}
