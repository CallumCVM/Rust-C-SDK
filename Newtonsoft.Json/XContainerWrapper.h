#pragma once

#include "..\UnityEngine\List.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class XContainerWrapper : public XObjectWrapper // 0x18
	{
	public:
		UnityEngine::List<Newtonsoft.Json.Converters.IXmlNode>* _childNodes; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
