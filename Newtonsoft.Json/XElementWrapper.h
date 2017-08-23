#pragma once

#include "..\UnityEngine\List.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class XElementWrapper : public XContainerWrapper // 0x20
	{
	public:
		UnityEngine::List<Newtonsoft.Json.Converters.IXmlNode>* _attributes; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
