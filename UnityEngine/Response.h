#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class Response : public ResponseBase // 0x0
	{
	public:
		UnityEngine::UnicodeString* <extendedInfo>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool <success>k__BackingField; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
