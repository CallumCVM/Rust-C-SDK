#pragma once

#include "..\System\Xml\XmlNode.h"
#include "..\UnityEngine\List.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class XmlNodeWrapper : public Object // 0x0
	{
	public:
		System::Xml::XmlNode* _node; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::List<Newtonsoft.Json.Converters.IXmlNode>* _childNodes; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<Newtonsoft.Json.Converters.IXmlNode>* _attributes; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
