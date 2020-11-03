class CAdapterSteamUnifiedMessages001
{

	// Sends a service method (in binary serialized form) using the Steam Client.
	// Returns a unified message handle (k_InvalidUnifiedMessageHandle if could not send the message).
	virtual ClientUnifiedMessageHandle SendMethod( const char *pchServiceMethod, const void *pRequestBuffer, uint32 unRequestBufferSize, uint64 unContext ) = 0;

	// Gets the size of the response and the EResult. Returns false if the response is not ready yet.
	virtual bool GetMethodResponseInfo( ClientUnifiedMessageHandle hHandle, uint32 *punResponseSize, EResult *peResult ) = 0;

	// Gets a response in binary serialized form (and optionally release the corresponding allocated memory).
	virtual bool GetMethodResponseData( ClientUnifiedMessageHandle hHandle, void *pResponseBuffer, uint32 unResponseBufferSize, bool bAutoRelease ) = 0;

	// Releases the message and its corresponding allocated memory.
	virtual bool ReleaseMethod( ClientUnifiedMessageHandle hHandle ) = 0;

	// Sends a service notification (in binary serialized form) using the Steam Client.
	// Returns true if the notification was sent successfully.
	virtual bool SendNotification( const char *pchServiceNotification, const void *pNotificationBuffer, uint32 unNotificationBufferSize ) = 0;
};

