#pragma once

#include "..\System\Object.h"
#include "..\Newtonsoft\Json\Bson\BsonType.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Bson
{
	class BsonValue : public BsonToken // 0x20
	{
	public:
		System::Object _value; // 0x20 (size: 0x8, flags: 0x21, type: 0x1c)
		Newtonsoft::Json::Bson::BsonType _type; // 0x28 (size: 0x1, flags: 0x21, type: 0x11)
	}; // size = 0x30
}
