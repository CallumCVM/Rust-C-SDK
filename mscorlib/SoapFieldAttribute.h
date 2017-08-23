#pragma once

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
			namespace Metadata
{
	class SoapFieldAttribute : public SoapAttribute // 0x28
	{
	public:
		int _order; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* _elementName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		bool _isElement; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
