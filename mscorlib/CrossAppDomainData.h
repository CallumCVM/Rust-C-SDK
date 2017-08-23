#pragma once

#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Channels
{
	class CrossAppDomainData : public Object // 0x0
	{
	public:
		System::Object _ContextID; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		int _DomainID; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* _processGuid; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
