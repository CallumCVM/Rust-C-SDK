#pragma once

#include "..\System\Reflection\MethodBase.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Messaging
{
	class ArgInfo : public Object // 0x0
	{
	public:
		int* _paramMap; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int _inoutArgCount; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::MethodBase* _method; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
