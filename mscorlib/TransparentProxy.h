#pragma once

#include "..\System\Runtime\Remoting\Proxies\RealProxy.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Proxies
{
	class TransparentProxy : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Proxies::RealProxy* _rp; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		__int64 _class; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		bool _custom_type_info; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
