#pragma once

#include "..\Newtonsoft\Json\Bson\BsonString.h"
#include "..\Newtonsoft\Json\Bson\BsonToken.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Bson
{
	class BsonProperty : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Bson::BsonString* <Name>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Bson::BsonToken* <Value>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
