#pragma once

#include "..\Newtonsoft\Json\Utilities\ThreadSafeStore<Newtonsoft\Json\Serialization\DefaultSerializationBinder\TypeNameKey,System\Type>.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class DefaultSerializationBinder : public SerializationBinder // 0x0
	{
	public:
		Newtonsoft::Json::Utilities::ThreadSafeStore<Newtonsoft::Json::Serialization::DefaultSerializationBinder::TypeNameKey,System::Type> _typeCache; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x18
}
