#pragma once

#include "..\System\Xml\XmlElement.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class XmlElementWrapper : public XmlNodeWrapper // 0x28
	{
	public:
		System::Xml::XmlElement* _element; // 0x28 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x30
}
