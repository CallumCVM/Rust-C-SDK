#pragma once

#include "..\System\Collections\Hashtable.h"

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
	class CertificatePoliciesExtension : public X509Extension // 0x28
	{
	public:
		System::Collections::Hashtable* policies; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
