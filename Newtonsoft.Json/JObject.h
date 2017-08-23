#pragma once

#include "..\Newtonsoft\Json\Linq\JPropertyKeyedCollection.h"
#include "..\System\ComponentModel\PropertyChangedEventHandler.h"
#include "..\System\ComponentModel\PropertyChangingEventHandler.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JObject : public JContainer // 0x50
	{
	public:
		Newtonsoft::Json::Linq::JPropertyKeyedCollection* _properties; // 0x50 (size: 0x8, flags: 0x21, type: 0x12)
		System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::PropertyChangingEventHandler* PropertyChanging; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
