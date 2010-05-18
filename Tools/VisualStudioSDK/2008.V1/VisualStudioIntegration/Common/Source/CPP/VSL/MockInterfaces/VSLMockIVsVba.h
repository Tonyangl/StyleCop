/***************************************************************************

Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

This code is a part of the Visual Studio Library.

***************************************************************************/

#ifndef IVSVBA_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
#define IVSVBA_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5

#if _MSC_VER > 1000
#pragma once
#endif

#include "vbapkg.h"

#pragma warning(push)
#pragma warning(disable : 4510) // default constructor could not be generated
#pragma warning(disable : 4610) // can never be instantiated - user defined constructor required
#pragma warning(disable : 4512) // assignment operator could not be generated
#pragma warning(disable : 6011) // Dereferencing NULL pointer (a NULL derference is just another kind of failure for a unit test

namespace VSL
{

class IVsVbaNotImpl :
	public IVsVba
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IVsVbaNotImpl)

public:

	typedef IVsVba Interface;

	STDMETHOD(ShowVBA)()VSL_STDMETHOD_NOTIMPL

	STDMETHOD(GetVbaUnk)(
		/*[in]*/ IUnknown** /*pUnknown*/)VSL_STDMETHOD_NOTIMPL
};

class IVsVbaMockImpl :
	public IVsVba,
	public MockBase
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IVsVbaMockImpl)

public:

VSL_DEFINE_MOCK_CLASS_TYPDEFS(IVsVbaMockImpl)

	typedef IVsVba Interface;
	struct ShowVBAValidValues
	{
		HRESULT retValue;
	};

	STDMETHOD(ShowVBA)()
	{
		VSL_DEFINE_MOCK_METHOD_NOARGS(ShowVBA)

		VSL_RETURN_VALIDVALUES();
	}
	struct GetVbaUnkValidValues
	{
		/*[in]*/ IUnknown** pUnknown;
		HRESULT retValue;
	};

	STDMETHOD(GetVbaUnk)(
		/*[in]*/ IUnknown** pUnknown)
	{
		VSL_DEFINE_MOCK_METHOD(GetVbaUnk)

		VSL_CHECK_VALIDVALUE_INTERFACEPOINTER(pUnknown);

		VSL_RETURN_VALIDVALUES();
	}
};


} // namespace VSL

#pragma warning(pop)

#endif // IVSVBA_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
