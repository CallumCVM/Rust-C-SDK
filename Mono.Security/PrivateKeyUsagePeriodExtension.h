#pragma once

#include "..\System\DateTime.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
{
{
			namespace Extensions
{
	class PrivateKeyUsagePeriodExtension : public X509Extension // 0x28
	{
	public:
		System::DateTime notBefore; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime notAfter; // 0x38 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
