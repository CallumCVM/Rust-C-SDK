#pragma once

namespace Mono
{
	namespace Security
{
{
		namespace Protocol
{
{
{
			namespace Tls
{
	class ValidationResult : public Object // 0x0
	{
	public:
		bool trusted; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool user_denied; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		int error_code; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x18
}
