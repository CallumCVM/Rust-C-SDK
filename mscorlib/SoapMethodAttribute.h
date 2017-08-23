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
	class SoapMethodAttribute : public SoapAttribute // 0x28
	{
	public:
		UnityEngine::UnicodeString* _responseElement; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _responseNamespace; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _returnElement; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _soapAction; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		bool _useAttribute; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* _namespace; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x58
}
