#pragma once

#include "..\Newtonsoft\Json\Utilities\ReflectionObject.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class BinaryConverter : public JsonConverter // 0x0
	{
	public:
		Newtonsoft::Json::Utilities::ReflectionObject* _reflectionObject; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
