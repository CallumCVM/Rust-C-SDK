#pragma once

#include "..\System\Reflection\MemberInfo.h"
#include "..\System\Collections\ICollection.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
{
{
			namespace Serialization
{
	class InstanceDescriptor : public Object // 0x0
	{
	public:
		System::Reflection::MemberInfo* member; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ICollection* arguments; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool isComplete; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
