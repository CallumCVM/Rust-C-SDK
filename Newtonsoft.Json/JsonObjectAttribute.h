#pragma once

#include "..\Newtonsoft\Json\MemberSerialization.h"
#include "..\System\Nullable<Newtonsoft\Json\Required>.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonObjectAttribute : public JsonContainerAttribute // 0x50
	{
	public:
		Newtonsoft::Json::MemberSerialization _memberSerialization; // 0x50 (size: 0x4, flags: 0x1, type: 0x11)
		System::Nullable<Newtonsoft::Json::Required> _itemRequired; // 0x54 (size: 0x8, flags: 0x3, type: 0x15)
	}; // size = 0x60
}
