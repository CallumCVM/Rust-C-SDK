#pragma once

namespace System
{
	namespace IO
{
{
		namespace Pipes
{
	class SecurityAttributesHack : public ValueType // 0x0
	{
	public:
		int Length; // 0x10 (size: 0x4, flags: 0x26, type: 0x8)
		__int64 SecurityDescriptor; // 0x18 (size: 0x8, flags: 0x26, type: 0x18)
		bool Inheritable; // 0x20 (size: 0x1, flags: 0x26, type: 0x2)
	}; // size = 0x28
}
