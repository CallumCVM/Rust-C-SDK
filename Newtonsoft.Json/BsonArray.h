#pragma once

#include "..\UnityEngine\List.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Bson
{
	class BsonArray : public BsonToken // 0x20
	{
	public:
		UnityEngine::List<Newtonsoft.Json.Bson.BsonToken>* _children; // 0x20 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x28
}
