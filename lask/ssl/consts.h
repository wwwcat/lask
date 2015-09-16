
/*
 * Copyright (C) Spyderj
 */

typedef struct _ConstReg {
	const char *name;
	int value;
}ConstReg; 
#define CONST(name)			{#name, SSL_##name}
#define CONST_NULL			{NULL, 0}

static const ConstReg consts[] = {
	CONST(OP_ALL),
	CONST(OP_CIPHER_SERVER_PREFERENCE),
	CONST(OP_DONT_INSERT_EMPTY_FRAGMENTS),
	CONST(OP_EPHEMERAL_RSA),
	CONST(OP_NETSCAPE_CA_DN_BUG),
	CONST(OP_NETSCAPE_CHALLENGE_BUG),
	CONST(OP_MICROSOFT_BIG_SSLV3_BUFFER),
	CONST(OP_MICROSOFT_SESS_ID_BUG),
	CONST(OP_MSIE_SSLV2_RSA_PADDING),
	CONST(OP_NETSCAPE_DEMO_CIPHER_CHANGE_BUG),
	CONST(OP_NETSCAPE_REUSE_CIPHER_CHANGE_BUG),
	CONST(OP_NO_SESSION_RESUMPTION_ON_RENEGOTIATION),
	CONST(OP_NO_SSLv2),
	CONST(OP_NO_SSLv3),
	CONST(OP_NO_TLSv1),
	CONST(OP_PKCS1_CHECK_1),
	CONST(OP_PKCS1_CHECK_2),
	CONST(OP_SINGLE_DH_USE),
	CONST(OP_SSLEAY_080_CLIENT_DH_BUG),
	CONST(OP_SSLREF2_REUSE_CERT_TYPE_BUG),
	CONST(OP_TLS_BLOCK_PADDING_BUG),
	CONST(OP_TLS_D5_BUG),
	CONST(OP_TLS_ROLLBACK_BUG),
	
	CONST(VERIFY_NONE),
	CONST(VERIFY_PEER),
	CONST(VERIFY_CLIENT_ONCE),
	CONST(VERIFY_FAIL_IF_NO_PEER_CERT),
	
	CONST(MODE_ENABLE_PARTIAL_WRITE),
	CONST(MODE_ACCEPT_MOVING_WRITE_BUFFER),
	CONST(MODE_AUTO_RETRY),
	CONST(MODE_RELEASE_BUFFERS),
	
	CONST(ERROR_NONE),
	CONST(ERROR_WANT_READ),
	CONST(ERROR_WANT_WRITE),
	CONST(ERROR_ZERO_RETURN),
	CONST(ERROR_WANT_CONNECT),
	CONST(ERROR_WANT_ACCEPT),
	CONST(ERROR_SYSCALL),
	CONST(ERROR_SSL),
	CONST(ERROR_WANT_X509_LOOKUP),
	
	CONST_NULL
};
