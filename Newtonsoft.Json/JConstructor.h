#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JConstructor : public JContainer // 0x50
	{
	public:
		UnityEngine::UnicodeString* _name; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::List<Newtonsoft.Json.Linq.JToken>* _values; // 0x58 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x60
}
