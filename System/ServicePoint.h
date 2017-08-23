#pragma once

#include "..\System\Uri.h"
#include "..\System\DateTime.h"
#include "..\System\Version.h"
#include "..\System\Security\Cryptography\X509Certificates\X509Certificate.h"
#include "..\System\Net\IPHostEntry.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Object.h"
#include "..\System\Net\BindIPEndPoint.h"

namespace System
{
	namespace Net
{
	class ServicePoint : public Object // 0x0
	{
	public:
		System::Uri* uri; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Version* protocolVersion; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509Certificate* certificate; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509Certificate* clientCertificate; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::IPHostEntry* host; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* groups; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object locker; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object hostE; // 0x48 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Net::BindIPEndPoint* endPointCallback; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		int connectionLimit; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		int maxIdleTime; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		int currentConnections; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		System::DateTime idleSince; // 0x68 (size: 0x10, flags: 0x1, type: 0x11)
		bool usesProxy; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
		bool sendContinue; // 0x79 (size: 0x1, flags: 0x1, type: 0x2)
		bool useConnect; // 0x7a (size: 0x1, flags: 0x1, type: 0x2)
		bool useNagle; // 0x7b (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
