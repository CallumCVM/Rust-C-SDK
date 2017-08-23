#pragma once

#include "..\Newtonsoft\Json\Serialization\DefaultContractResolverState.h"
#include "..\System\Reflection\BindingFlags.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class DefaultContractResolver : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Serialization::DefaultContractResolverState* _instanceState; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		bool _sharedCache; // 0x18 (size: 0x1, flags: 0x21, type: 0x2)
		System::Reflection::BindingFlags <DefaultMembersSearchFlags>k__BackingField; // 0x1c (size: 0x4, flags: 0x1, type: 0x11)
		bool <SerializeCompilerGeneratedMembers>k__BackingField; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IgnoreSerializableInterface>k__BackingField; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IgnoreSerializableAttribute>k__BackingField; // 0x22 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
