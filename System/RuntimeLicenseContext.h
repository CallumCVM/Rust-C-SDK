#pragma once

#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class RuntimeLicenseContext : public LicenseContext // 0x0
	{
	public:
		System::Collections::Hashtable* extraassemblies; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* keys; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
