#pragma once

namespace rust 
{
	class CertificateContext : public ValueType // 0x0
	{
	public:
		unsigned int dwCertEncodingType; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		__int64 pbCertEncoded; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		unsigned int cbCertEncoded; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		__int64 pCertInfo; // 0x28 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 hCertStore; // 0x30 (size: 0x8, flags: 0x6, type: 0x18)
	}; // size = 0x38
}
