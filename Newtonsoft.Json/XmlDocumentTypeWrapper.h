#pragma once

#include "..\System\Xml\XmlDocumentType.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class XmlDocumentTypeWrapper : public XmlNodeWrapper // 0x28
	{
	public:
		System::Xml::XmlDocumentType* _documentType; // 0x28 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x30
}
