#pragma once

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class ErrorWrapper : public Object // 0x0
	{
	public:
		int errorCode; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x18
}
