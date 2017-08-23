#pragma once

#include "..\System\Xml\XmlDocument.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class XmlDocumentWrapper : public XmlNodeWrapper // 0x28
	{
	public:
		System::Xml::XmlDocument* _document; // 0x28 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x30
}
