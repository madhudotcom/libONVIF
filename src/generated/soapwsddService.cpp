/* soapwsddService.cpp
   Generated by gSOAP 2.8.55 for generated.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapwsddService.h"

wsddService::wsddService()
{	this->soap = soap_new();
	this->soap_own = true;
	wsddService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

wsddService::wsddService(const wsddService& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
}

wsddService::wsddService(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	wsddService_init(_soap->imode, _soap->omode);
}

wsddService::wsddService(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	wsddService_init(iomode, iomode);
}

wsddService::wsddService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	wsddService_init(imode, omode);
}

wsddService::~wsddService()
{	if (this->soap_own)
		soap_free(this->soap);
}

void wsddService::wsddService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
        {"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
        {"saml1", "urn:oasis:names:tc:SAML:1.0:assertion", NULL, NULL},
        {"saml2", "urn:oasis:names:tc:SAML:2.0:assertion", NULL, NULL},
        {"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
        {"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
        {"wsc", "http://docs.oasis-open.org/ws-sx/ws-secureconversation/200512", NULL, NULL},
        {"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
        {"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
        {"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
        {"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
        {"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
        {"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
        {"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
        {"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
        {"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
        {"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
        {"tad", "http://www.onvif.org/ver10/analyticsdevice/wsdl", NULL, NULL},
        {"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
        {"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
        {"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
        {"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
        {"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
        {"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
        {"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
        {"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
        {"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
        {"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
        {"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
        {"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

void wsddService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void wsddService::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	wsddService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
wsddService *wsddService::copy()
{	wsddService *dup = SOAP_NEW_COPY(wsddService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

wsddService& wsddService::operator=(const wsddService& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
	}
	return *this;
}

int wsddService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int wsddService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int wsddService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int wsddService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int wsddService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int wsddService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void wsddService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void wsddService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *wsddService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void wsddService::soap_noheader()
{	this->soap->header = NULL;
}

void wsddService::soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence)
{	::soap_header(this->soap);
	this->soap->header->wsse__Security = wsse__Security;
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
	this->soap->header->wsdd__AppSequence = wsdd__AppSequence;
}

::SOAP_ENV__Header *wsddService::soap_header()
{	return this->soap->header;
}

#ifndef WITH_NOIO
int wsddService::run(int port)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int wsddService::ssl_run(int port)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->ssl_accept() || this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}
#endif

SOAP_SOCKET wsddService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET wsddService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int wsddService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif
#endif

int wsddService::serve()
{
#ifndef WITH_FASTCGI
	this->soap->keep_alive = this->soap->max_keep_alive + 1;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (this->soap->keep_alive > 0 && this->soap->max_keep_alive > 0)
			this->soap->keep_alive--;
#endif
		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if ((dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap))) && this->soap->error && this->soap->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___wsdd__Hello(struct soap*, wsddService*);
static int serve___wsdd__Bye(struct soap*, wsddService*);
static int serve___wsdd__Probe(struct soap*, wsddService*);
static int serve___wsdd__ProbeMatches(struct soap*, wsddService*);
static int serve___wsdd__Resolve(struct soap*, wsddService*);
static int serve___wsdd__ResolveMatches(struct soap*, wsddService*);

int wsddService::dispatch()
{	return dispatch(this->soap);
}

int wsddService::dispatch(struct soap* soap)
{
	wsddService_init(soap->imode, soap->omode);

	soap_peek_element(soap);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "wsdd:Hello")) || (soap->action && !strcmp(soap->action, "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/Hello")))
		return serve___wsdd__Hello(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "wsdd:Bye")) || (soap->action && !strcmp(soap->action, "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/Bye")))
		return serve___wsdd__Bye(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "wsdd:Probe")) || (soap->action && !strcmp(soap->action, "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/Probe")))
		return serve___wsdd__Probe(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "wsdd:ProbeMatches")) || (soap->action && !strcmp(soap->action, "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/ProbeMatches")))
		return serve___wsdd__ProbeMatches(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "wsdd:Resolve")) || (soap->action && !strcmp(soap->action, "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/Resolve")))
		return serve___wsdd__Resolve(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "wsdd:ResolveMatches")) || (soap->action && !strcmp(soap->action, "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/ResolveMatches")))
		return serve___wsdd__ResolveMatches(soap, this);
	return soap->error = SOAP_NO_METHOD;
}

static int serve___wsdd__Hello(struct soap *soap, wsddService *service)
{	struct __wsdd__Hello soap_tmp___wsdd__Hello;
	soap_default___wsdd__Hello(soap, &soap_tmp___wsdd__Hello);
	if (!soap_get___wsdd__Hello(soap, &soap_tmp___wsdd__Hello, "-wsdd:Hello", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Hello(soap_tmp___wsdd__Hello.wsdd__Hello);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__Bye(struct soap *soap, wsddService *service)
{	struct __wsdd__Bye soap_tmp___wsdd__Bye;
	soap_default___wsdd__Bye(soap, &soap_tmp___wsdd__Bye);
	if (!soap_get___wsdd__Bye(soap, &soap_tmp___wsdd__Bye, "-wsdd:Bye", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Bye(soap_tmp___wsdd__Bye.wsdd__Bye);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__Probe(struct soap *soap, wsddService *service)
{	struct __wsdd__Probe soap_tmp___wsdd__Probe;
	soap_default___wsdd__Probe(soap, &soap_tmp___wsdd__Probe);
	if (!soap_get___wsdd__Probe(soap, &soap_tmp___wsdd__Probe, "-wsdd:Probe", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Probe(soap_tmp___wsdd__Probe.wsdd__Probe);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__ProbeMatches(struct soap *soap, wsddService *service)
{	struct __wsdd__ProbeMatches soap_tmp___wsdd__ProbeMatches;
	soap_default___wsdd__ProbeMatches(soap, &soap_tmp___wsdd__ProbeMatches);
	if (!soap_get___wsdd__ProbeMatches(soap, &soap_tmp___wsdd__ProbeMatches, "-wsdd:ProbeMatches", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->ProbeMatches(soap_tmp___wsdd__ProbeMatches.wsdd__ProbeMatches);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__Resolve(struct soap *soap, wsddService *service)
{	struct __wsdd__Resolve soap_tmp___wsdd__Resolve;
	soap_default___wsdd__Resolve(soap, &soap_tmp___wsdd__Resolve);
	if (!soap_get___wsdd__Resolve(soap, &soap_tmp___wsdd__Resolve, "-wsdd:Resolve", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Resolve(soap_tmp___wsdd__Resolve.wsdd__Resolve);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__ResolveMatches(struct soap *soap, wsddService *service)
{	struct __wsdd__ResolveMatches soap_tmp___wsdd__ResolveMatches;
	soap_default___wsdd__ResolveMatches(soap, &soap_tmp___wsdd__ResolveMatches);
	if (!soap_get___wsdd__ResolveMatches(soap, &soap_tmp___wsdd__ResolveMatches, "-wsdd:ResolveMatches", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->ResolveMatches(soap_tmp___wsdd__ResolveMatches.wsdd__ResolveMatches);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
