/*
 * olestock.h - Stock OLE header file.
 */


/* Types
 ********/

/* IDs */

DECLARE_STANDARD_TYPES(GUID);
DECLARE_STANDARD_TYPES(CLSID);
DECLARE_STANDARD_TYPES(IID);

typedef PROC *Interface;
DECLARE_STANDARD_TYPES(Interface);

/* interfaces */

DECLARE_STANDARD_TYPES(IAdviseSink);
DECLARE_STANDARD_TYPES(IBindCtx);
DECLARE_STANDARD_TYPES(IClassFactory);
DECLARE_STANDARD_TYPES(IDataObject);
DECLARE_STANDARD_TYPES(IEnumFORMATETC);
DECLARE_STANDARD_TYPES(IEnumSTATDATA);
DECLARE_STANDARD_TYPES(IMalloc);
DECLARE_STANDARD_TYPES(IMoniker);
DECLARE_STANDARD_TYPES(IPersist);
DECLARE_STANDARD_TYPES(IPersistFile);
DECLARE_STANDARD_TYPES(IPersistStorage);
DECLARE_STANDARD_TYPES(IPersistStream);
DECLARE_STANDARD_TYPES(IStorage);
DECLARE_STANDARD_TYPES(IStream);
DECLARE_STANDARD_TYPES(IUnknown);

/* structures */

DECLARE_STANDARD_TYPES(FORMATETC);
DECLARE_STANDARD_TYPES(STGMEDIUM);

