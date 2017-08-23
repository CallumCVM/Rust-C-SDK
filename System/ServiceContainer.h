#pragma once

#include "..\System\IServiceProvider.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class ServiceContainer : public Object // 0x0
	{
	public:
		System::IServiceProvider* parentProvider; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* services; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool _disposed; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
