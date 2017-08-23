#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class ContractNamespaceAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* clr_ns; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* contract_ns; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
