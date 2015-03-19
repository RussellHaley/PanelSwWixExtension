#pragma once
#include "../CaCommon/DeferredActionBase.h"

class CTelemetry :
	public CDeferredActionBase
{
public:

	HRESULT AddPost(LPCWSTR szUrl, LPCWSTR szData);

protected:
	// Execute the command object (XML element)
	virtual HRESULT DeferredExecute(IXMLDOMElement* pElem);

private:
	HRESULT Post(LPCWSTR szUrl, LPCWSTR szData);
};
