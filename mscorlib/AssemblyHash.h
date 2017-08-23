#pragma once

#include "..\System\Configuration\Assemblies\AssemblyHashAlgorithm.h"

namespace System
{
	namespace Configuration
{
{
		namespace Assemblies
{
	class AssemblyHash : public ValueType // 0x0
	{
	public:
		System::Configuration::Assemblies::AssemblyHashAlgorithm _algorithm; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		unsigned char* _value; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
