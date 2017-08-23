#pragma once

#include "..\System\Object.h"
#include "..\Newtonsoft\Json\Serialization\ErrorContext.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class ErrorEventArgs : public EventArgs // 0x0
	{
	public:
		System::Object <CurrentObject>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		Newtonsoft::Json::Serialization::ErrorContext* <ErrorContext>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
