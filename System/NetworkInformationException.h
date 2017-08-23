#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class NetworkInformationException : public Win32Exception // 0x68
	{
	public:
		int error_code; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
