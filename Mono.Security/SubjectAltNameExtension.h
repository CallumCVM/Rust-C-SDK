#pragma once

#include "..\Mono\Security\X509\Extensions\GeneralNames.h"

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
	class SubjectAltNameExtension : public X509Extension // 0x28
	{
	public:
		Mono::Security::X509::Extensions::GeneralNames* _names; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
